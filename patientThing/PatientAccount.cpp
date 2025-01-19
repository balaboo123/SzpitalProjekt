// Plik: PatientAccount.cpp
// Autor: 
// Data: 18.11.2024
// Opis: Rozwini�cie funkcji/metod klasy PatientAccount, kt�ra przechowuje dane dotycz�ce koszt�w leczenia pacjenta. 

#include "PatientAccount.h"

int PatientAccount::DAILY_COST = 50;

// konstruktor
PatientAccount::PatientAccount(string name) : name(name)
{
}

void PatientAccount::updateTotalCost()
{
	// Ustawienie totalCost zgodnie z liczba dni oraz kosztem za kazdy dzien
}

// uzywane przez Surgery
void PatientAccount::setSurgeryCost(double cost)
{
}

// uzywane przez Pharmacy
void PatientAccount::setMedicineCost(double cost)
{
	cout << cost << endl;
}

void PatientAccount::showDetails()
{
	// Komunikat po wyborze menu, wyswietla obecna ilosc dni, i jakie zabiegi
}

void PatientAccount::showFinalDetails()
{
	// Komunikat ko�cowy, wy�wietlaj�cy normalne detale + ostateczny koszt
	this->showDetails();

}

void PatientAccount::setDays(int amount)
{
}

