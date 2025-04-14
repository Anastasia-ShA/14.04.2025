#include <iostream>
#include "kombinatorika.h"


int main() {
	setlocale(0, "Russian");
	int deistvie; 
	

	do
	{
		cout << "\nВыберите: \n0)-Вернуться в главное меню\n1)-Размещение с повторением\n2)-Размещение без повторений\n3)-Сочетание с повторением\n4)-Сочетание без повторений\n5)-Перестановка без повторений\n6)-Перестановка с повторениями\n";
		cin >> deistvie;
		switch (deistvie)
		{
		case 1: Razmechenie_S_Povtoreniem();
		case 2:Razmechenie_Bez_Povtoreniy();
		case 3:Sochetanie_S_Povtoreniem();
		case 4:Sochetanie_Bez_Povtoreniy();
		case 5:Perestanovka_Bez_Povtoreniy();
		case 6:Perestanovka_S_Povtoreniyami();
		default:
			break;
		}

	} while (deistvie!=0);



	return 0;
}
