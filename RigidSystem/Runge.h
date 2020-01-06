#include <math.h>

//точное решение

double u1(double x)
{
	return 10 * exp(-0.01 * x) - 3 * exp(-1000 * x);
}
double u2(double x)
{
	return 10 * exp(-0.01 * x) + 3 * exp(-1000 * x);
}

 //правая часть ДУ

void PK2(int n, double h, double* vn)
{
	//неявный метод. значение на n+1 шаге связали с v0 (разложение по базису из собственных векторов)

	double k1 = (1 - 0.005 * h) / (1 + 0.005 * h);
	double k2 = (1 - 500 * h) / (1 + 500 * h);

	//n+1 шаг

	vn[0] = 10 * pow(k1, n + 1) - 3 * pow(k2, n + 1);
	vn[1] = 10 * pow(k1, n + 1) + 3 * pow(k2, n + 1);

}
