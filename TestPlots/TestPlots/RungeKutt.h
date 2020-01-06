#pragma once
#include <math.h>

double f(double u, double Q1)
{

	return 0.25 * (Q1 - 500 * u);
}

double solver(double x,double Q1, double u0, double x0) //решение в зависимости от н.у. , Q1, x
{
	return 0.002 * Q1 + (u0 - 0.002 * Q1) * exp(125 * (x0 - x));
}

double u1(double x) //решение при Q1 = 0, определенное до непрерывности
{
	return 60 - 50 * exp(-125 * x);
}

double u2(double x) //решение при Q1 = 0, определенное до непрерывности
{
	return 10 * exp(-125 * x);
}

double PK4(double x, double v, double h, double Q1) //ћетод –  4-ого пор€дка, один шаг. (x,v) - предыдуща€ точка 
{
	double k1 = f(v,Q1);
	double k2 = f(v + h / 2 * k1, Q1);
	double k3 = f(v + h / 2 * k2, Q1);
	double k4 = f(v + h * k3, Q1);
	return v + h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
}

double GetS(double v_, double v) //получить S, p считаем равным 4
{
	return abs((v_ - v) / 15);
}
