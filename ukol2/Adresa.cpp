#include "Adresa.h"

Adresa::Adresa(string u, string c, string p, string m)
{
	this->ulice = u;
	this->cisloPopisne = c;
	this->PSC = p;
	this->mesto = m;

}

string Adresa::celaAdresa()
{
	return this->ulice + " " + this->cisloPopisne + "\n" + this->PSC + " " + this->mesto;
}
