#pragma once
#include <string>
using namespace std;
class Adresa
{
private:
	string ulice;
	string cisloPopisne;
	string PSC;
	string mesto;
public:
	Adresa(string u, string c, string p, string m);
	string celaAdresa();
};

