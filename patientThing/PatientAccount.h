// Plik: PatientAccount.h
// Autor: 
// Data: 
// Opis: Definicja klasy PatientAccount, kt�ra przechowuje dane dotycz�ce koszt�w leczenia pacjenta. 

#pragma once

// Niech klasa PatientAccount przechowuje ca�kowity koszt leczenia pacjenta i liczb� dni jego pobytu w szpitalu. Grupa powinna ustali� cen� jednego dnia pobytu.


// Konto pacjenta
class PatientAccount {
private:
    double totalCost; // koszt leczenia
    int totalDays;

public:
    static int DAILY_COST;

    void updateTotalCost(double amount);
};
