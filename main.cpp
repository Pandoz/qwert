#include <iostream>
#include <fstream>
#include "Complex.h"
using namespace std;
int main()
{
	system("chcp 1251");
	double a, b, c, d;
	char v;
	cout << "Число должно принимать значения данного диапазона[-1000; 1000]\n";
	cout << "Введите два значения первого комплексного числа(re, im):\n";
	bool bCheck{ true };
	while (bCheck)
	{
		cin >> a;
		cin >> b;
		bCheck = check(a, b);
	}

cout << "Введите два значения второго комплексного числа(re, im):\n";
	bCheck = true;
	while (bCheck)
	{
		cin >> c;
		cin >> d;
		bCheck = check(c, d);
	}
	Complex N1 = { a, b }
	Complex N2 = { c, d };
	cout << "Выберите операция:\n";
	cin >> v;
	switch (v)// Выбор операции
	{
	case '+':
		pluss(N1, N2);
		break;
	case '-':
		substruct(N1, N2);
		break;
	case '*':
		multiplication(N1, N2);
		break;
	case '/':
		devide(N1, N2);
		break;
	default:
		cout << "Данной операции не существует\n Вычисления не возможны";
	}
	ifstream F;
	F.open("complex.txt");
	int n;
	F >> n;
	int i;
	int k, k1;
	int MAX = -1;
	Complex pm;
	Complex *p = new Complex[n];
	for (i = 0; i < n; i++)
	{
		F >> k;
		F >> k1;
		Complex z{ k, k1 };
		cout << p[i].re << " " << p[i].im << endl;
		if (sqrt(p[i].re * p[i].re + p[i].im * p[i].im) > MAX)
		{
			MAX = sqrt(p[i].re * p[i].re + p[i].im * p[i].im);
			pm = p[i];
		}
	}
	cout << "Результат: ";
	cout << pm.re << " " << pm.im << endl;
	system("pause");
}
