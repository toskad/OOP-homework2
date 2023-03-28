#include "PolozkaFaktury.h"



PolozkaFaktury::PolozkaFaktury()
{
	this->nazev = "nazev";
	this->cena = 0;
}

PolozkaFaktury::PolozkaFaktury(string n, int c)
{
	this->nazev = n;
	this->cena = c;
}

string PolozkaFaktury::GetNazev()
{
	return this->nazev;
}

int PolozkaFaktury::GetCena()
{
	return this->cena;
}
