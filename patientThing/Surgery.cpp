// Plik: Surgery.cpp
// Autor: Kacper Jozwiak
// Data: 18.11.2024
// Opis: Rozwiniêcie funkcji klasy Surgery, która przechowuje 5 zabiegów chirurgicznych oraz zmienia koszt leczenia przechowywany w PatientAccount.

#include "Surgery.h"
#include <iomanip>

map<int, string> treatmentIds = {
    {1, "lobotomia"},
    {2, "powiekszanie piersi"},
    {3, "mezoterapia glowy"},
    {4, "wybicie zebow"},
    {5, "wyrwanie wlosow"},
};
map<string, double> treatments = {
    {"lobotomia", 19999.99}, // sekretny zabieg
    {"powiekszanie piersi", 1249.99},
    {"mezoterapia glowy", 349.99},
    {"wybicie zebow", 4.99},
    {"wyrwanie wlosow", 49.99},
};

int Surgery::TREATMENT_AMOUNT = treatments.size();

Surgery::Surgery() {
}

//wypisywanie wszystkich mo¿liwych zabiegów wraz z kosztem
void Surgery::showTreatments()
{
    cout << "\nDostepne zabiegi:\n";
    for (const auto& treatment : treatmentIds) {
        cout << treatment.first << ") " << treatment.second << " - " << fixed << setprecision(2) << treatments[treatment.second] << " z³\n";
    }
}
// aktualizowanie kosztu leczenia w kwestii zabiegów
void Surgery::updatePatientCost(PatientAccount& patient, int treatmentId)
{
    if (treatmentIds.find(treatmentId) != treatmentIds.end()) {
        string treatmentName = treatmentIds[treatmentId];
        if (treatments.find(treatmentName) != treatments.end()) {
            double cost = treatments[treatmentName];
            patient.setSurgeryCost(cost);
        }
    }
    else { cout << "Bledny identyfikator zabiegu.\n"; }
}
