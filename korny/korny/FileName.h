#include <iostream>
#include <locale>
#include <malloc.h>
using namespace std;

double x;
int n;
double* Znacheniapolinoma;
double a, b;
double podshett(double chislo);

auto vvod_a_b() {
	cout << "Введите значения границы отрезка, где a = "; cin >> a; cout << "b = "; cin >> b;
}

void metod_bisektsii() {
    const double toshnost = 1e-6;
    const int Maximalnoe_Kolvo_vichisleniy = 10000;
    double c;

    double fa = podshett(a);
    double fb = podshett(b);

    cout << "f(a) = " << fa << endl;
    cout << "f(b) = " << fb << endl;

    if (fa * fb >= 0) {
        cout << "Функция должна иметь разные знаки на концах отрезка";
        return;
    }

    for (int i = 0; i < Maximalnoe_Kolvo_vichisleniy; i++) {
        c = (a + b) / 2;
        double fc = podshett(c);

        if (abs(fc) < toshnost || (b - a) / 2 < toshnost) {
            cout << "Найден корень: x = " << c << endl;
            return;
        }

        if (fc * fa < 0) {
            b = c;
            fb = fc;
        }
        else {
            a = c;
            fa = fc;
        }
    }

    cout << "Достигнуто максимальное количество итераций" << endl;
}


double vozvedenie_v_stepen(double osnovanie, int stepen) {
	if (stepen == 0) return 1;
	if (stepen == 1) return osnovanie;
	double half = vozvedenie_v_stepen(osnovanie, stepen / 2);
	if (stepen % 2 == 0)
		return half * half;
	else
		return half * half * osnovanie;
}
double podshett(double chislo) {
	double sum = 0.0;
	for (int i = 0; i <= n; i++) {
		sum += Znacheniapolinoma[i] * vozvedenie_v_stepen(chislo, i);
	}
	return sum;
}

void polinom() {
	do {
		cout << "\nВведите степень полинома n = "; cin >> n;
		if (n <= 0) { cout << "Степень полинома не может быть отрицательной или равна 0"; }
	} while (n <= 0);


	delete[] Znacheniapolinoma;
	Znacheniapolinoma = new double[n+1];

	cout << "Введите значения a: ";
	for (int i = 0; i < n+1; i++) {
		cout << "a[" << i << "] = "; cin >> Znacheniapolinoma[i];
	}
    vvod_a_b();
}

void stepennaya() {
    double A, B, C;
    cout << "Введите значения для показательной функции:\nA = "; cin >> A; cout << "B = "; cin >> B; cout << "C = "; cin >> C;
    vvod_a_b();

}