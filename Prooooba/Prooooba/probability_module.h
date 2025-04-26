#pragma once
#ifndef PROBABILITY_MODULE_H
#define PROBABILITY_MODULE_H

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool GetYesOrNo();
void praviolnost_Vvoda(double& a);
void praviolnost_Vvoda_int(int& a);
double parseFraction(const string& input);

void veroyatnostM_N();
void dispersiyaForDiskretnogoRaspVelichin(double* Xi, double* Pi, int kolvo_slychaynix_velichin);

void probability_module_menu() {
    int kolvo_slychaynix_velichin = 0;
    double* Xi = nullptr;
    double* Pi = nullptr;

    int choice;
    do {
        cout << "\nМодуль теории вероятностей:";
        cout << "\n1. Вероятность m/n";
        cout << "\n2. Дисперсия для дискретного распределения величин";
        cout << "\n0. Назад в главное меню\n";

        cin >> choice;

        switch (choice) {
        case 1: veroyatnostM_N(); break;
        case 2: {
            cout << "Введите количество случайных величин:";
            praviolnost_Vvoda_int(kolvo_slychaynix_velichin);
            if (Xi != nullptr) delete[] Xi;
            if (Pi != nullptr) delete[] Pi;
            Xi = new double[kolvo_slychaynix_velichin];
            Pi = new double[kolvo_slychaynix_velichin];
            dispersiyaForDiskretnogoRaspVelichin(Xi, Pi, kolvo_slychaynix_velichin);
            break;
        
        }
        case 0:
            if (Xi != nullptr) delete[] Xi;
            if (Pi != nullptr) delete[] Pi;
            break;
        default: cout << "Неверный выбор!\n";
        }
    } while (choice != 0);
}

#endif