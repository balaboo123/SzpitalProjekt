// Plik: Pharmacy.h
// Autor: 
// Data: 
// Opis: Definicja klasy Pharmacy, kt�ra przechowuje koszt 5 lek�w, oraz zmienia koszt leczenia w PatientAccount.

#pragma once

// Niech klasa Pharmacy przechowuje koszt co najmniej pi�ciu r�nych lek�w i odpowiednio zmienia koszt leczenia przechowywany w klasie PatientAccount.

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