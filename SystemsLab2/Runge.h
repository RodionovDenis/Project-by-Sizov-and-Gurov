#pragma once
#include <math.h>

//метод Рунге - Кутта 4-ого порядка

inline double f1(double u2)
{
	return u2;
}

inline double f2(double u1, double L)
{
	return -9.8 / L * u1;
}

inline void PK2(double x, double h, double v1, double v2, double L, double * vn) //возвращаем вектор двух компонент в массив vn
{
	//константы К

	double k1[2] = { f1(v2), f2(v1,L) };
	double k2[2] = { f1(v2 + h / 4 * k1[1]), f2(v1 + h / 4 * k1[0],L) };
	double k3[2] = { f1(v2 + h / 2 * k2[1]), f2(v1 + h / 2 * k2[0],L) };
	double k4[2] = { f1(v2 + h * (k1[1] - 2 * k2[1] + 2 * k3[1])), f2(v1 + h * (k1[0] - 2 * k2[0] + 2 * k3[0]), L) };

	//вычисление точек

	vn[0] = v1 + h / 6 * (k1[0] + 4 * k3[0] + k4[0]);
	vn[1] = v2 + h / 6 * (k1[1] + 4 * k3[1] + k4[1]);
}

inline double GetS(double v_, double v) //получить S, p считаем равным 2
{
	return fabs((v_ - v) / 3);
}