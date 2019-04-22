#ifndef Complex_h
#define Complex_h

struct Complex
{
	double re;
	double im;
};
bool check(double x, double y);
void pluss(Complex N1, Complex N2);
void substruct(Complex N1, Complex N2);
void multiplication(Complex N1, Complex N2);
void devide(Complex N1, Complex N2);

#endif

