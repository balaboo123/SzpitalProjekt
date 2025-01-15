// Plik: Pharmacy.h
// Autor: 
// Data: 
// Opis: Definicja klasy Pharmacy, która przechowuje koszt 5 leków, oraz zmienia koszt leczenia w PatientAccount.

#pragma once

// Niech klasa Pharmacy przechowuje koszt co najmniej piêciu ró¿nych leków i odpowiednio zmienia koszt leczenia przechowywany w klasie PatientAccount.

#include <iostream>
#include <vector>

#include "PatientAccount.h"
using namespace std;

class Pharmacy {
private:
    string password; // haslo do szpitala, aby dodawac zabiegi
    vector<PatientAccount> patients;

public:

};