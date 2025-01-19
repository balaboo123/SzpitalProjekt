// Plik: Surgery.h
// Autor: 
// Data: 18.11.2024
// Opis: Definicja klasy Surgery, kt�ra przechowuje 5 zabieg�w chirurgicznych oraz zmienia koszt leczenia przechowywany w PatientAccount.

// Niech klasa Surgery prechowuje koszt co najmniej pi�ciu r�nych zabieg�w chirurgicznych i odpowiednio zmienia koszt leczenia przechowywany w klasie PatientAccount.
#pragma once

#include "PatientAccount.h"

#include <map>
#include <unordered_map>

using namespace std;

// Zabieg chirurgiczny (pacjent, nazwa zabiegu)
class Surgery {
private:
    string treatment; // nazwa zabiegu, musi byc jedna z tych w "treatment"

public:
    Surgery();

    static int TREATMENT_AMOUNT;
    static void showTreatments();

    void updatePatientCost(PatientAccount& patient, int treatmentId);
};