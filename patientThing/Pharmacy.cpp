// Plik: Pharmacy.cpp
// Autor: 
// Data: 18.11.2024
// Opis: Rozwiniêcie funkcji klasy Pharmacy, która przechowuje koszt 5 leków, oraz zmienia koszt leczenia w PatientAccount.

#include "Pharmacy.h"

unordered_map<int, string> medicineIds = {
    {1, "lek1"},
    {2, "lek2"},
    {3, "lek3"},
    {4, "lek4"},
    {5, "lek5"},
};
unordered_map<string, double> medicine = {
    {"lek1", 19999.99}, // sekretny zabieg
    {"lek2", 12499.99},
    {"lek3", 349.99},
    {"lek4", 4.99},
    {"lek5", 49.99},
};