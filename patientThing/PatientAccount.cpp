// Plik: PatientAccount.cpp
// Autor: Bartosz Misiak
// Data: 18.11.2024
// Opis: Rozwiniecie funkcji/metod klasy PatientAccount, ktora przechowuje dane dotyczace kosztow leczenia pacjenta. 

#include "PatientAccount.h"

int PatientAccount::DAILY_COST = 50;

// Konstruktor
PatientAccount::PatientAccount(string name) : name(name), totalCost(0), totalDays(0), surgeryCost(0), medicineCost(0)
{
}

// Aktualizacja calkowitego kosztu leczenia
void PatientAccount::updateTotalCost()
{
    double hospitalStayCost = totalDays * DAILY_COST;

    totalCost = hospitalStayCost + surgeryCost + medicineCost;
}

// Ustawienie kosztu zabiegu chirurgicznego
void PatientAccount::setSurgeryCost(double cost)
{
    this->surgeryCost = cost;
    updateTotalCost(); // Aktualizacja calkowitego kosztu po dodaniu kosztu zabiegu
}

// Ustawienie kosztu lekow
void PatientAccount::setMedicineCost(double cost)
{
    this->medicineCost = cost;
    updateTotalCost(); // Aktualizacja calkowitego kosztu po dodaniu kosztu leku
}

// Wyswietlanie szczegolw leczenia pacjenta
void PatientAccount::showDetails()
{
    cout << "\n- Liczba dni pobytu w szpitalu: " << totalDays << "\n";
    cout << "- Koszt zabiegow chirurgicznych: " << surgeryCost << " zl\n";
    cout << "- Koszt lekow: " << medicineCost << " zl\n";
}

// Wyswietlanie ostatecznych szczegolow pacjenta
void PatientAccount::showFinalDetails()
{
    this->showDetails();
    cout << "\nOstateczny calkowity koszt leczenia: " << totalCost << " zl\n";
}

// Ustawienie liczby dni pobytu pacjenta w szpitalu
void PatientAccount::setDays(int amount)
{
    if (amount > 0) {
        this->totalDays = amount;
        updateTotalCost(); // Aktualizacja calkowitego kosztu po ustawieniu liczby dni
    }
    else {
        cout << "Liczba dni musi byc wieksza od zera.\n";
    }
}