#include <iostream>
#include "kombinatorika.h"


int main() {
	setlocale(0, "Russian");
	int deistvie; 
	

	do
	{
		cout << "\n��������: \n0)-��������� � ������� ����\n1)-���������� � �����������\n2)-���������� ��� ����������\n3)-��������� � �����������\n4)-��������� ��� ����������\n5)-������������ ��� ����������\n6)-������������ � ������������\n";
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
