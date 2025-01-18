// Plik: Surgery.h
// Autor: 
// Data: 18.11.2024
// Opis: Definicja klasy Surgery, kt�ra przechowuje 5 zabieg�w chirurgicznych oraz zmienia koszt leczenia przechowywany w PatientAccount.

#pragma once

// Niech klasa Surgery prechowuje koszt co najmniej pi�ciu r�nych zabieg�w chirurgicznych i odpowiednio zmienia koszt leczenia przechowywany w klasie PatientAccount.

#include <iostream>
#include <map>
#include <unordered_map>

#include "PatientAccount.h"

using namespace std;

// Zabieg chirurgiczny (pacjent, nazwa zabiegu)
class Surgery {
private:
    PatientAccount patient;
    string treatment; // treatment name, must be within 'treatments'


public:
    Surgery(PatientAccount patient, string treatment)
        : patient(patient), treatment(treatment) {

    }
};