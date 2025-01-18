// Plik: Pharmacy.cpp
// Autor: Miko�aj Lisowski
// Data: 04.11.2024
// Opis: Plik ��cz�cy projekt szpitalu w ca�o��, kt�ry umo�liwia u�ytkownikowi

#include <iostream>
#include <vector>

#include "Surgery.h"
#include "Pharmacy.h"

using namespace std;


int main()
{
    setlocale(LC_CTYPE, "Polish");

    Pharmacy pharmacy;
    PatientAccount patient;

    int wybor;
    do {
        cout << "========  MENU  ========\n";
        cout << "1) Ustaw ilo�� dni zabiegu\n";
        cout << "2) Wybierz zabieg\n";
        cout << "3) Wybierz lek\n";
        cout << "4) Wypisz pacjenta\n";

        cout << "Wyb�r: ";
        cin >> wybor;

        switch (wybor) {
        case 1: {
            cout << "Podaj ilo�� dni zabiegu:";
            break;
        }
        case 2: {

            break;
        }
        case 3: {

            break;
        }
        case 4: {

            break;
        }
        default: {
            cout << "Niepoprawny wyb�r.\n";
        }
        }
    } while (wybor != 4);
    
    cout << endl;
    patient.showTotalCost();
    cout << "Wypisano pacjenta - koniec programu.\n";

    return 0;
}