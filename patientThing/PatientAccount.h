// Plik: PatientAccount.h
// Autor: 
// Data: 18.11.2024
// Opis: Definicja klasy PatientAccount, która przechowuje dane dotycz¹ce kosztów leczenia pacjenta. 

#pragma once

// Niech klasa PatientAccount przechowuje ca³kowity koszt leczenia pacjenta i liczbê dni jego pobytu w szpitalu. Grupa powinna ustaliæ cenê jednego dnia pobytu.


// Konto pacjenta
class PatientAccount {
private:
    double totalCost; // ca³kowity koszt leczenia
    int totalDays;

public:
    // dzienny koszt leczenia (inicjalizowany w pliku PatientAccount.cpp)
    static int DAILY_COST;

    void updateTotalCost(double amount);

    void showTotalCost();
};
