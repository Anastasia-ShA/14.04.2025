int m;
int n;
#include <map>
#include <cstring>
using namespace std;

void pravilnost_Vvoda(int a, int b) {
	
    cout << "Введите n (должно быть положительным целым): ";
    while (!(cin >> n) || n <= 0) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Ошибка! Введите положительное целое число: ";
    }

	if(b!=1 || b!=2){
		cout << "Введите m (должно быть положительным целым): ";
		while (!(cin >> m) || m <= 0) {
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "Ошибка! Введите положительное целое число: ";
		}
	}
}

int factorial(int a) {
	int res=1;
	if (a == 0 || a == 1)return 1;
	else{
		for (int i = 1; i <= a; i++) {
			res *= i;
		}
		return res;
	}
}

void ObrabotkaSlova() {
	char slovo[100];

	cout << "Введите слово: "; cin >> slovo;
	int k = strlen(slovo);
	map<char, int> letterCounts;
	int res = 1;
	for (int i = 0; i < k; ++i) {
		char ch = slovo[i];
		letterCounts[ch]++;
	}
	for (const auto& pair : letterCounts) {
		res *= factorial(pair.second);
	}
	cout << factorial(k) / res;

}

void vozvedenie_V_steven(int a, int b) {
	int res = 1;
	for (int i = 0; i < b; i++) {
		res *= a;
	}
	cout << res;
}

void Razmechenie_S_Povtoreniem() {
	char povtor;
	do {
		cout << "\nCколькими способами можно выбрать и разместить по m различным местам m из n предметов, среди которых есть одинаковые?\n";
		pravilnost_Vvoda(n,m);
		vozvedenie_V_steven(m, n);
		cout << "\nХотите повторить? (y/n)";
		cin >> povtor;
	}while (povtor == 'y' || povtor == 'Y');
}

void Razmechenie_Bez_Povtoreniy() {
	char povtor;
	do
	{
		cout << "\nCколькими способами можно выбрать и разместить по m различным местам m из n различных предметов?\n";
		pravilnost_Vvoda(n, m);
		cout << factorial(n)/factorial(n-m);
		cout << "\nХотите повторить? (y/n)";
		cin >> povtor;
	} while (povtor == 'y' || povtor == 'Y');
}

void Sochetanie_S_Povtoreniem() {
	char povtor;
	do
	{
		cout << "\nCколькими способами можно выбрать m (5) из этих (n*r) предметов?\n";
		pravilnost_Vvoda(n, m);
		cout << factorial(n+m-1) / (factorial(m)*factorial(n-1));
		cout << "\nХотите повторить? (y/n)";
		cin >> povtor;
	} while (povtor == 'y' || povtor == 'Y');


}

void Sochetanie_Bez_Povtoreniy() {
	char povtor;
	do
	{
		cout << "\nCколькими способами можно выбрать m из n различных предметов?\n";
		pravilnost_Vvoda(n, m);
		cout << factorial(n) / (factorial(m) * factorial(n - m));
		cout << "\nХотите повторить? (y/n)";
		cin >> povtor;
	} while (povtor == 'y' || povtor == 'Y');

}

void Perestanovka_Bez_Povtoreniy() {
	char povtor;
	do
	{
		cout << "\nCколькими способами можно разместить n различных предметов на n различных местах?\n";
		pravilnost_Vvoda(n, 1);
		cout << factorial(n);
		cout << "\nХотите повторить? (y/n)";
		cin >> povtor;
	} while (povtor == 'y' || povtor == 'Y');
}

void Bykvy() {
	cout << "Введите количество букв в слове (должно быть положительным целым): ";
	while (!(cin >> n) || n <= 0) {
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Ошибка! Введите положительное целое число: ";
	}
	cout << "Введите количество уникальных букв: ";
	while (!(cin >> m) || m <= 0 || m > n) {
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Ошибка! Введите положительное целое число: ";
	}

	int res = 1;
	for (int i = 0; i < m; ++i) {
		int k;
		cout << "Введите количество повторений для уникальной буквы " << (i + 1) << ": ";
		while (!(cin >> k) || k <= 0) {
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "Ошибка! Введите положительное целое число: ";
		}
		res *= factorial(k);

	}
	cout << factorial(n)/res;
}

void Perestanovka_S_Povtoreniyami(){
	char povtor;
	int choise;
	do
	{
		cout << "\nCколькими способами можно переставить n предметов, расположенных на n различных местах, если среди n предметов имеются k различных типов (k < n), т. е. есть одинаковые предметы\n";
		cout << "Выверите каким способом вы хотите ввести\n1)-Ввести слово\n2)-Ввести количество каждой буквы в слове\n"; cin >> choise;
		switch (choise)
		{
		case 1:ObrabotkaSlova();
		case 2:Bykvy();
		default:break;
		}


		cout << "\nХотите повторить? (y/n)";
		cin >> povtor;
	} while (povtor == 'y' || povtor == 'Y');

}

