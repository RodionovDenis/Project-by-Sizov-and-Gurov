#pragma once
#include <math.h>

double f(double u, double Q1)
{

	return 0.25 * (Q1 - 500 * u);
}

double solver(double x,double Q1, double u0, double x0) //������� � ����������� �� �.�. , Q1, x
{
	return 0.002 * Q1 + (u0 - 0.002 * Q1) * exp(125 * (x0 - x));
}

double u1(double x) //������� ��� Q1 = 0, ������������ �� �������������
{
	return 60 - 50 * exp(-125 * x);
}

double u2(double x) //������� ��� Q1 = 0, ������������ �� �������������
{
	return 10 * exp(-125 * x);
}

double PK4(double x, double v, double h, double Q1) //����� �� 4-��� �������, ���� ���. (x,v) - ���������� ����� 
{
	double k1 = f(v,Q1);
	double k2 = f(v + h / 2 * k1, Q1);
	double k3 = f(v + h / 2 * k2, Q1);
	double k4 = f(v + h * k3, Q1);
	return v + h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
}

double GetS(double v_, double v) //�������� S, p ������� ������ 4
{
	return abs((v_ - v) / 15);
}
