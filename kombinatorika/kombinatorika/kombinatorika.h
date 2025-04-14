int m;
int n;
#include <map>
#include <cstring>
using namespace std;

void pravilnost_Vvoda(int a, int b) {
	
    cout << "������� n (������ ���� ������������� �����): ";
    while (!(cin >> n) || n <= 0) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "������! ������� ������������� ����� �����: ";
    }

	if(b!=1 || b!=2){
		cout << "������� m (������ ���� ������������� �����): ";
		while (!(cin >> m) || m <= 0) {
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "������! ������� ������������� ����� �����: ";
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

	cout << "������� �����: "; cin >> slovo;
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
		cout << "\nC�������� ��������� ����� ������� � ���������� �� m ��������� ������ m �� n ���������, ����� ������� ���� ����������?\n";
		pravilnost_Vvoda(n,m);
		vozvedenie_V_steven(m, n);
		cout << "\n������ ���������? (y/n)";
		cin >> povtor;
	}while (povtor == 'y' || povtor == 'Y');
}

void Razmechenie_Bez_Povtoreniy() {
	char povtor;
	do
	{
		cout << "\nC�������� ��������� ����� ������� � ���������� �� m ��������� ������ m �� n ��������� ���������?\n";
		pravilnost_Vvoda(n, m);
		cout << factorial(n)/factorial(n-m);
		cout << "\n������ ���������? (y/n)";
		cin >> povtor;
	} while (povtor == 'y' || povtor == 'Y');
}

void Sochetanie_S_Povtoreniem() {
	char povtor;
	do
	{
		cout << "\nC�������� ��������� ����� ������� m (5) �� ���� (n*r) ���������?\n";
		pravilnost_Vvoda(n, m);
		cout << factorial(n+m-1) / (factorial(m)*factorial(n-1));
		cout << "\n������ ���������? (y/n)";
		cin >> povtor;
	} while (povtor == 'y' || povtor == 'Y');


}

void Sochetanie_Bez_Povtoreniy() {
	char povtor;
	do
	{
		cout << "\nC�������� ��������� ����� ������� m �� n ��������� ���������?\n";
		pravilnost_Vvoda(n, m);
		cout << factorial(n) / (factorial(m) * factorial(n - m));
		cout << "\n������ ���������? (y/n)";
		cin >> povtor;
	} while (povtor == 'y' || povtor == 'Y');

}

void Perestanovka_Bez_Povtoreniy() {
	char povtor;
	do
	{
		cout << "\nC�������� ��������� ����� ���������� n ��������� ��������� �� n ��������� ������?\n";
		pravilnost_Vvoda(n, 1);
		cout << factorial(n);
		cout << "\n������ ���������? (y/n)";
		cin >> povtor;
	} while (povtor == 'y' || povtor == 'Y');
}

void Bykvy() {
	cout << "������� ���������� ���� � ����� (������ ���� ������������� �����): ";
	while (!(cin >> n) || n <= 0) {
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "������! ������� ������������� ����� �����: ";
	}
	cout << "������� ���������� ���������� ����: ";
	while (!(cin >> m) || m <= 0 || m > n) {
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "������! ������� ������������� ����� �����: ";
	}

	int res = 1;
	for (int i = 0; i < m; ++i) {
		int k;
		cout << "������� ���������� ���������� ��� ���������� ����� " << (i + 1) << ": ";
		while (!(cin >> k) || k <= 0) {
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "������! ������� ������������� ����� �����: ";
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
		cout << "\nC�������� ��������� ����� ����������� n ���������, ������������� �� n ��������� ������, ���� ����� n ��������� ������� k ��������� ����� (k < n), �. �. ���� ���������� ��������\n";
		cout << "�������� ����� �������� �� ������ ������\n1)-������ �����\n2)-������ ���������� ������ ����� � �����\n"; cin >> choise;
		switch (choise)
		{
		case 1:ObrabotkaSlova();
		case 2:Bykvy();
		default:break;
		}


		cout << "\n������ ���������? (y/n)";
		cin >> povtor;
	} while (povtor == 'y' || povtor == 'Y');

}

