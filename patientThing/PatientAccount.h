// Plik: PatientAccount.h
// Autor: 
// Data: 
// Opis: Definicja klasy PatientAccount, która przechowuje dane dotycz¹ce kosztów leczenia pacjenta. 

#pragma once

// Niech klasa PatientAccount przechowuje ca³kowity koszt leczenia pacjenta i liczbê dni jego pobytu w szpitalu. Grupa powinna ustaliæ cenê jednego dnia pobytu.


// Konto pacjenta
class PatientAccount {
private:
    double totalCost; // koszt leczenia
    int totalDays;

public:
    static int DAILY_COST;

    void updateTotalCost(double amount);
};
