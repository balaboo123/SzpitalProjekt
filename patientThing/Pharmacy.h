// Plik: Pharmacy.h
// Autor: Patryk Pilichowski
// Data: 18.11.2024
// Opis: Definicja klasy Pharmacy, kt�ra przechowuje koszt 5 lek�w, oraz zmienia koszt leczenia w PatientAccount.

// Niech klasa Pharmacy przechowuje koszt co najmniej pi�ciu r�nych lek�w i odpowiednio zmienia koszt leczenia przechowywany w klasie PatientAccount.
#pragma once

#include "PatientAccount.h"

#include <vector>
#include <map>

using namespace std;

class Pharmacy {
private:


public:
	Pharmacy();

	static int MEDICINE_AMOUNT;
	static void showMedicine();

	void updatePatientCost(PatientAccount& patient, int medicineId);
};