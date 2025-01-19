// Plik: PatientAccount.h
// Autor: 
// Data: 18.11.2024
// Opis: Definicja klasy PatientAccount, która przechowuje dane dotycz¹ce kosztów leczenia pacjenta. 

// Niech klasa PatientAccount przechowuje ca³kowity koszt leczenia pacjenta i liczbê dni jego pobytu w szpitalu. Grupa powinna ustaliæ cenê jednego dnia pobytu.
#pragma once

#include <iostream>

using namespace std;

// Konto pacjenta
class PatientAccount {
private:
    string name;
    double totalCost; // ca³kowity koszt leczenia
    int totalDays;

    double surgeryCost = 0;
    double medicineCost = 0;

public:
    PatientAccount(string name);

    // dzienny koszt leczenia (inicjalizowany w pliku PatientAccount.cpp)
    static int DAILY_COST;

    void showDetails();
    void showFinalDetails();

    void setDays(int amount);
    void updateTotalCost();

    void setSurgeryCost(double cost);
    void setMedicineCost(double cost);
};
