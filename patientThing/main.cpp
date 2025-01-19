// Plik: Pharmacy.cpp
// Autor: Mikolaj Lisowski
// Data: 04.11.2024
// Opis: Plik laczacy projekt szpitalu w calosc, ktory umozliwia uzytkownikowi wyliczenie ilosc dni 

#include <iostream>
#include <vector>
#include <string>

#include "Surgery.h"
#include "Pharmacy.h"

using namespace std;


int main()
{
    setlocale(LC_CTYPE, "Polish");

    Pharmacy pharmacy;
    Surgery surgery;

    cout << "<-------------------------------------------------->\n";
    cout << "<---<   Program SSS: [Super Szpital Szkolny]   >--->\n";
    cout << "<------------------<   WITAMY   >------------------>\n";

    cout << "\nPodaj imie pacjenta: ";
    string name;
    getline(cin, name);

    PatientAccount patient(name);

    int choice;
    do {
        cout << "=========  MENU  =========\n";
        cout << "1) Ustaw ilosc dni zabiegu [cena za dzien: " << PatientAccount::DAILY_COST << " zl]\n";
        cout << "2) Wybierz zabieg\n";
        cout << "3) Wybierz lek\n";
        cout << "4) Wypisz pacjenta\n";

        cout << "Wybor: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int days;

            do {
                cout << "-> Podaj ilosc dni zabiegu: ";
                cin >> days;
            } while (days <= 0);

            patient.setDays(days);
            
            break;
        }
        case 2: {
            Surgery::showTreatments();

            int treatmentId;
            do {
                cout << "-> Wybierz zabieg pacjenta (numer zabiegu): ";
                cin >> treatmentId;
            } while (treatmentId < 1 || treatmentId > Surgery::TREATMENT_AMOUNT);

            surgery.updatePatientCost(patient, treatmentId);

            break;
        }
        case 3: {
            Pharmacy::showMedicine();

            int medicineId;
            do {
                cout << "-> Wybierz lek pacjenta (numer leku): ";
                cin >> medicineId;
            } while (medicineId < 1 || medicineId > Pharmacy::MEDICINE_AMOUNT);

            pharmacy.updatePatientCost(patient, medicineId);

            break;
        }
        case 4: {

            break;
        }
        default: {
            cout << "Niepoprawny wybor.\n";
        }
        }

        patient.updateTotalCost();

        if (choice == 4) {
            // wypisanie pacjenta
            std::cout << "\nOstateczne informacje pacjenta \"" << name << "\": ";
            patient.showFinalDetails();
            break;
        }

        std::cout << "\nObecne informacje pacjenta \"" << name << "\": ";
        patient.showDetails();
        std::cout << endl;
    } while (choice != 4);
    
    cout << endl;
    cout << "\n<-----  Wypisano pacjenta - koniec programu.  ----->";

    return 0;
}