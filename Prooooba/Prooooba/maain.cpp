#include <locale.h>
#include <stdio.h>
#include <iostream>
#include "menu_system.h"

using namespace std;

int main() {
    setlocale(0, "Russian");

    while (true) {
        cout << "\nГлавное меню. Выберите модуль:";
        cout << "\n1. Теория вероятностей";
        cout << "\n2. Другой модуль (пример)";
        cout << "\n0. Выход\n";

        int choice;
        cin >> choice;

        if (choice == 0) break;

        switch (choice) {
        case 1: probability_module_menu(); break;
        case 2: 
        default: cout << "Неверный выбор!\n";
        }
    }

    return 0;
}