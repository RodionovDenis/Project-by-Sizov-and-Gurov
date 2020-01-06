#pragma once
#include <math.h>
#include <iostream>


inline double f(double x, double u) //функиця f, правая часть ДУ
{
	return x / (1 + x * x) * (u * u) + u - u * u * u * sin(10 * x);
}

inline double PK4(double x, double v, double h) //Метод РК 4-ого порядка, один шаг 
{
	double k1 = f(x, v);
	double k2 = f(x + h / 2, v + h / 2 * k1);
	double k3 = f(x + h / 2, v + h / 2 * k2);
	double k4 = f(x + h, v + h * k3);
	return v + h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
}

inline double GetS(double v_, double v) //получить S, p считаем равным 4
{
	return abs((v_ - v) / 15);
}



