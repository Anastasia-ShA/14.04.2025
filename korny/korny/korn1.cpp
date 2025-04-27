#include "FileName.h"
extern double a;
extern double b;


int main() {
	int deistvie;
	setlocale(0, "Russian");
	do
	{
		cout << "\n\nПоиск корней y=0 на отрезке.\nФунции:\n0. Вернуться в глаавное меню\n1. Полином степени N: a0+a1*x+a2*x^2+...aN*x^N" <<
			"\n2. Степенная: A*x^B+C\n3. Показательная: A*B^(C*x)+D\n4. Логарифмическая: A*ln(B*x)+C\n5. Синусоида: A*sin(B*x+C)+D" <<
			"\n6. Косинусоида: A*cos(B*x+C)+D\n";
		cin >> deistvie;

		switch (deistvie)
		{
		case 1:vvod_a_b(); polinom(); metod_bisektsii(); break;
		case 2:vvod_a_b();
		case 3:
		case 4:
		case 5:
		case 6:
		default:
			break;
		}



	} while (deistvie!=0);





}