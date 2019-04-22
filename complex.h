#ifndef Complex_h
#define Complex_h

struct Complex
{
	double re;
	double im;
};
bool check(double x, double y);
void pluss(Complex Z, Complex X);
void substruct(Complex Z, Complex X);
void multiplication(Complex Z, Complex X);
void devide(Complex Z, Complex X);

#endif

