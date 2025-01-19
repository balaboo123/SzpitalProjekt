// Plik: Surgery.cpp
// Autor: Kacper Jozwiak
// Data: 18.11.2024
// Opis: Rozwiniêcie funkcji klasy Surgery, która przechowuje 5 zabiegów chirurgicznych oraz zmienia koszt leczenia przechowywany w PatientAccount.

#include "Surgery.h"

map<int, string> treatmentIds = {
    {1, "lobotomia"},
    {2, "powiekszanie piersi"},
    {3, "mezoterapia glowy"},
    {4, "wybicie zebow"},
    {5, "wyrwanie wlosow"},
};
map<string, double> treatments = {
    {"lobotomia", 19999.99}, // sekretny zabieg
    {"powiekszanie piersi", 12499.99},
    {"mezoterapia glowy", 349.99},
    {"wybicie zebow", 4.99},
    {"wyrwanie wlosow", 49.99},
};

int Surgery::TREATMENT_AMOUNT = treatments.size();

Surgery::Surgery() {
}

void Surgery::showTreatments()
{
    // Pokaz wszystkie zabiegi, wraz z ich ID
}

void Surgery::updatePatientCost(PatientAccount& patient, int treatmentId)
{
}
