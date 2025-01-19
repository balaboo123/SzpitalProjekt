// Plik: Pharmacy.h
// Autor: Patryk Pilichowski
// Data: 18.11.2024
// Opis: Definicja klasy Pharmacy, która przechowuje koszt 5 leków, oraz zmienia koszt leczenia w PatientAccount.

// Niech klasa Pharmacy przechowuje koszt co najmniej piêciu ró¿nych leków i odpowiednio zmienia koszt leczenia przechowywany w klasie PatientAccount.
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