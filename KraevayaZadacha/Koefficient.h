#include <math.h>

inline double u1(double x)
{
	return(0.587442041369 * exp(x * sqrt(2)) - 1.587442041369 * exp(-x * sqrt(2)) + 1);
}
inline double u2(double x)
{
	return(-16.2373198654222 * exp(x * sqrt(0.05)) - 23.3782594365286 * exp(-x * sqrt(0.05)) + 40);
}

inline double k1(double x, int flag)
{
	if (flag == 0)
		return sqrt(1.1 + x);
	else
		return 0.5;
}

inline double k2(double x, int flag)
{
	if (flag == 0)
		return 1 + x;
	else
		return 1.25;
}

inline double q1(double x)
{
	return 1;
}

inline double q2(double x, int flag)
{
	if (flag == 0)
		return x * x;
	else
		return 0.0625;
}

inline double f1(double x)
{
	return 1;
}

inline double f2(double x, int flag)
{
	if (flag == 0)
		return 2 + sqrt(x);
	else
		return 2.5;
}

inline void solveMatrix(int n, double* a, double* c, double* b, double* f, double* x) //прогонка
{
	double m;
	for (int i = 1; i < n; i++)
	{
		m = a[i] / c[i - 1];
		c[i] = c[i] - m * b[i - 1];
		f[i] = f[i] - m * f[i - 1];
	}

	x[n - 1] = f[n - 1] / c[n - 1];

	for (int i = n - 2; i >= 0; i--)
	{
		x[i] = (f[i] - b[i] * x[i + 1]) / c[i];
	}

	//ƒанный код работает при предположении, что a[0] = 0, b[n - 1] = 0.

		/*
		  n - число уравнений (строк матрицы)
		  b - диагональ, лежаща¤ над главной (нумеруетс¤: [0;n-2])
		  c - главна¤ диагональ матрицы A (нумеруетс¤: [0;n-1])
		  a - диагональ, лежаща¤ под главной (нумеруетс¤: [1;n-1])
		  f - права¤ часть (столбец)
		  x - решение, массив x будет содержать ответ
		 */
}

//вычисление интегралов
inline double* a(int n, double h, double E, int flag) //n - разбиение сетки, E - разрывна¤ точка
{
	double* a = new double[n]; //значени¤ интегралов
	if(flag == 0)
		for (int i = 0; i < n; i++)
		{
			double left = i * h;
			double right = (i + 1) * h;
			if (right <= E)
				a[i] = k1(right - h / 2, flag);
			else if (left >= E)
				a[i] = k2(right - h / 2, flag);
			else
			{
				double r1 = E - left;
				double r2 = right - E;
				double middle1 = (left + E) / 2.0;
				double middle2 = (right + E) / 2.0;
				a[i] = h * pow((r1 / k1(middle1, flag) + r2 / k2(middle2,flag)), -1);
			}
		}
	else
		for (int i = 0; i < n; i++)
		{
			double left = i * h;
			double right = (i + 1) * h;
			if (right <= E)
				a[i] = h * 0.5 * pow((right - left), -1);
			else if (left >= E)
				a[i] = a[i] = h * 1.25 * pow((right - left), -1);
			else
			{
				double r1 = E - left;
				double r2 = right - E;
				a[i] = h * pow((2 * r1 + 0.8 * r2), -1);
			}
		}
	return a;
}

inline double* d(int n,double h, double E, int flag) //n - разбиение сетки
{
	double* d = new double[n - 1]; //значени¤ интегралов
	if(flag == 0)
		for (int i = 0; i < n - 1; i++)
		{
			double left = i * h + h / 2;
			double right = (i + 1) * h + h / 2;
			if (right <= E)
				d[i] = q1(left + h / 2);
			else if (left >= E)
				d[i] = q2(left + h / 2, flag);
			else
			{
				double r1 = E - left;
				double r2 = right - E;
				double middle1 = (left + E) / 2.0;
				double middle2 = (right + E) / 2.0;
				d[i] = n * (r1 * q1(middle1) + r2 * q2(middle2, flag));
			}
		}
	else
		for (int i = 0; i < n - 1; i++)
		{
			double left = i * h + h / 2;
			double right = (i + 1) * h + h / 2;
			if (right <= E)
				d[i] = 1;
			else if (left >= E)
				d[i] = 0.0625;
			else
			{
				double r1 = E - left;
				double r2 = right - E;
				d[i] = n * (r1 + 0.0625 * r2);
			}
		}
	return d;
}

inline double* fi(int n,double h, double E, int flag)
{
	double* fi = new double[n - 1]; //значени¤ интегралов
	if(flag ==0)
		for (int i = 0; i < n - 1; i++)
		{
			double left = i * h + h / 2;
			double right = (i + 1) * h + h / 2;
			if (right <= E)
				fi[i] = f1(left + h / 2);
			else if (left >= E)
				fi[i] = f2(left + h / 2, flag);
			else
			{
				double r1 = E - left;
				double r2 = right - E;
				double middle1 = (left + E) / 2.0;
				double middle2 = (right + E) / 2.0;
				fi[i] = n * (r1 * f1(middle1) + r2 * f2(middle2, flag));
			}
		}
	else
		for (int i = 0; i < n - 1; i++)
		{
			double left = i * h + h / 2;
			double right = (i + 1) * h + h / 2;
			if (right <= E)
				fi[i] = 1;
			else if (left >= E)
				fi[i] = 2.5;
			else
			{
				double r1 = E - left;
				double r2 = right - E;
				fi[i] = n * (r1 + r2 * 2.5);
			}
		}
	return fi;
}

//получение коэффициентов дл¤ прогонки (разностна¤ схема)
inline double* MainDiagonale(double* a, double* d, double h, int n) //главна¤ диагональ матрицы
{
	double* diagonale = new double[n+1];
	diagonale[0] = 1;
	for (int i = 1; i < n; i++)
		diagonale[i] = -1*(a[i-1] + a[i]) / (h * h) - d[i - 1];
	diagonale[n] = 1;
	return diagonale;
}

inline double* UpDiagonale(double* a, double h, int n)
{
	double* updiagonale = new double[n+1];
	updiagonale[0] = 0;
	for (int i = 1; i < n; i++)
		updiagonale[i] = a[i] / (h * h);
	updiagonale[n] = 0;
	return updiagonale;
}

inline double* DownDiagonale(double* a, double h, int n)
{
	double* downdiagonale = new double[n+1];
	downdiagonale[0] = 0;
	for (int i = 1; i < n; i++)
		downdiagonale[i] = a[i-1] / (h * h);
	downdiagonale[n] = 0;
	return downdiagonale;
}

inline double* RightPart(double* fi, int n, double m1, double m2)
{
	double* right = new double[n+1];
	right[0] = m1;
	for (int i = 1; i < n; i++)
		right[i] = -1*fi[i - 1];
	right[n] = m2;
	return right;

}

inline double* v(int n, double E, double m1, double m2, int flag)
{
	double h = 1.0 / n;
	//вычисление интегралов

	double* integrate_a = a(n, h, E, flag);
	double* integrate_d = d(n, h, E, flag);
	double* integrate_fi = fi(n, h, E, flag);

	//вычисление элементов системы

	double* main_diag = MainDiagonale(integrate_a, integrate_d, h, n);
	double* up_diag = UpDiagonale(integrate_a, h, n);
	double* down_diag = DownDiagonale(integrate_a, h, n);
	double* f = RightPart(integrate_fi, n, m1, m2);

	//метод прогонки
	double* v = new double[n + 1]; //сеточна¤ функци¤
	solveMatrix(n + 1, down_diag, main_diag, up_diag, f, v);
	return v;
}