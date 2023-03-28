#pragma once
#include <string>
#include "Osoba.h"
#include "Adresa.h"
#include "PolozkaFaktury.h"
using namespace std;
class Faktura
{
private:
	int ID;
	Osoba* osoba;
	Adresa* adresa;
	PolozkaFaktury* polozky;
public:
	Faktura(int id, Osoba *o, Adresa *a, PolozkaFaktury* p);
	~Faktura();
	int celkovaCena();
	void tisk();
};

