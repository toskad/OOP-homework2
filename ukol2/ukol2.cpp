// ukol2.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include "Osoba.h"
#include "Adresa.h"
#include "PolozkaFaktury.h"
#include "Faktura.h"


int main()
{
    Osoba osoba = { "Jan", "Novak" };
    Adresa adresa = { "17.listopadu", "15", "708 00", "Ostrava-Poruba" };
    PolozkaFaktury* polozky = new PolozkaFaktury[3];
    polozky[0] = PolozkaFaktury("Cihly", 5000);
    polozky[1] = PolozkaFaktury("Beton", 2500);
    polozky[2] = PolozkaFaktury("Pisek", 1200);
    Faktura faktura = {123 ,&osoba ,&adresa , polozky};
    faktura.tisk();

    return 0;
}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
