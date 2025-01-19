// Plik: Pharmacy.cpp
// Autor: Patryk Pilichowski
// Data: 18.11.2024
// Opis: Rozwiniecie funkcji klasy Pharmacy, ktora przechowuje koszt 5 lekow, oraz zmienia koszt leczenia w PatientAccount.

#include "Pharmacy.h"

map<int, string> medicineIds = {
    {1, "Bengay"},
    {2, "Ocenisept"},
    {3, "Gripex"},
    {4, "Verdin"},
    {5, "Vicodin"},
};
map<string, double> medicine = {
    {"Bengay", 19.99},
    {"Ocenisept", 12.99},
    {"Gripex", 39.99},
    {"Verdin", 4.99},
    {"Vicodin", 24.99},
};

int Pharmacy::MEDICINE_AMOUNT = medicine.size();

Pharmacy::Pharmacy()
{
}

void Pharmacy::showMedicine()
{
    cout << "\nDostepne leki:\n";
    for (const auto& medicines : medicineIds) {
        cout << medicines.first << ") " << medicines.second << " - " << medicine[medicines.second] << " z³\n";
    }
}

void Pharmacy::updatePatientCost(PatientAccount& patient, int medicineId)
{
    if (medicineIds.find(medicineId) != medicineIds.end()) {
        string medicineName = medicineIds[medicineId];
        if (medicine.find(medicineName) != medicine.end()) {
            double cost = medicine[medicineName];
            patient.setMedicineCost(cost);
        }
    }
    else { cout << "Bledny identyfikator leku.\n"; }
}
