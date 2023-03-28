#include "Osoba.h"


Osoba::Osoba(string j, string p)
{
	this->jmeno = j;
	this->prijmeni = p;
}

string Osoba::celeJmeno()
{
	return this->jmeno + " " + this->prijmeni;
}
