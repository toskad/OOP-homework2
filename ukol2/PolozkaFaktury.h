#pragma once
#include <string>
using namespace std;
class PolozkaFaktury
{
private:
	string nazev;
	int cena;
public:
	PolozkaFaktury();
	PolozkaFaktury(string n, int c);
	string GetNazev();
	int GetCena();
};

