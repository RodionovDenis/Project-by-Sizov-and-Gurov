#include "Runge.h"
#include <iostream>
#include <clocale>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Жесткая система." << endl;
	cout << "Неявный метод Рунге-Кутта оптимального порядка" << endl << endl;
	double h = 0;
	int n = 0;

	cout << "Шаг: ";
	cin >> h;
	cout << "Количество итераций: ";
	cin >> n;

	double* vn = new double[2];

	//таблица

	cout << endl << setw(7)<< "N"<<"|" << setw(15) << "x"<<"|" << setw(20) << "u1(x)"<<"|" << setw(20) << "u2(x)"
		<<"|"<< setw(20) << "v1(x)"<<"|" << setw(20) << "v2(x)"<<"|" << endl;
	cout << "------------------------------------------------------------------------------------------------------------" << endl;

	for (int i = 0; i <= n; i++)
	{
		double x = i * h;
		PK2(i - 1, h, vn); //вычисление vn значений

		//вывод данных

		cout << setw(7) << i << "|" << setw(15) << x << "|" << setw(20) << u1(x) << "|"
			<< setw(20) << u2(x) << "|" << setw(20) << vn[0] << "|" << setw(20) << vn[1] << "|" << endl;
	}

}