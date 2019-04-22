#include <iostream>
#include "Complex.h"
using namespace std;

bool check(double x, double y)//Проверка
{
	if (x > 1000 || x < -1000 || y > 1000 || y < -1000)
	{
		cout << "Вы ввели неверное число, попробуйте еще раз\n";
		return 1;
	}
	return 0;
}
void pluss(Complex N1, Complex N2)//Операция сложения
{
	Complex rez;
	rez.re = N1.re + N2.re;
	rez.im = N1.im + N2.im;
	cout << rez.re << " + (" << rez.im << ")i\n";
}
void substruct(Complex N1, Complex N2)//Операция вычетания
{
	Complex rez;
	rez.re = N1.re - N2.re;
	rez.im = N1.im - N2.im;
	cout << rez.re << " + (" << rez.im << ")i\n";
}
void multiplication(Complex N1, Complex N2)//Операция умножения
{
	Complex rez;
	rez.re = N1.re * N2.re - N1.im * N2.im;
	rez.im = N1.re * N2.im - N1.im * N2.re;
	cout << rez.re << " + (" << rez.im << ")i\n";
}
void devide(Complex N1, Complex N1)//Операция деления
{
	Complex rez;
	rez.re = (N1.re * N2.re + N1.im * N2.im) / (N1.re * N2.re + N2.im * N2.im);
	rez.im = (N1.re * N2.im - N2.re * N1.im) / (N2.re * N2.re + N2.im * N2.im);
	cout << rez.re << " + (" << rez.im << ")i\n";
}
