#include "Faktura.h"
#include <iostream>
using namespace std;

Faktura::Faktura(int id, Osoba *o, Adresa *a, PolozkaFaktury* p)
{
	this->ID = id;
	this->osoba = o;
	this->adresa = a;
	this->polozky = p;
}

Faktura::~Faktura()
{
	delete[] this->polozky;
}

int Faktura::celkovaCena()
{
	int cena = 0;
	for (int i = 0; i < 3; i++) {
		cena += this->polozky[i].GetCena();
	}
	return cena;
}

void Faktura::tisk()
{
	cout << this->osoba->celeJmeno() << endl;
	cout << endl;
	cout << this->adresa->celaAdresa() << endl;
	cout << endl;
	for (int i = 0; i < 3; i++) {
		cout << this->polozky[i].GetNazev() << ": " << this->polozky[i].GetCena() << ",-" << endl;
	}
	cout << endl;
	cout << "Celkova cena: " << this->celkovaCena() << ",-" << endl;

}
