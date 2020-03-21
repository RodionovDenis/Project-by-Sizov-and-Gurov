using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace IterationsMethoodForDirihleTask
{
    class MainTask
    {
        //границы прямоугольника
        private double a;
        private double b;
        private double c;
        private double d;

        private int n; //разбиений по Х
        private int m; //разбиений по У

        private double h; //шаг по X 
        private double k; //шаг по У

        private int Nmax; //максимальное количество шагов
        private double Epsmax; //точность итерационного метода

        DataGridView table_n = new DataGridView(); //таблица для шага n
        DataGridView table_2n = new DataGridView(); //таблица для шага 2n
        DataGridView table_error = new DataGridView(); //таблица для ошибки

        public double[,] V; // для решения
        public double[,] r; //для невязки

        private double l1;
        private double ln;

        public int N = 0; //количество проведенных шагов
        public double eps = 0; //погрешность метода 

        public MainTask(double a_, double b_, double c_, double d_,
            int n_, int m_, int Nmax_, double Epsmax_)
        {
            a = a_; b = b_; c = c_; d = d_;
            n = n_; m = m_; Nmax = Nmax_; Epsmax = Epsmax_;

            V = new double[m - 1, n - 1]; //прямоугольник
            r = new double[m - 1, n - 1];

            h = (b - a) / (double)n;
            k = (d - c) / (double)m;

            //собственные числа
            l1 = 4d / (h * h) * Math.Sin(Math.PI / (2d * n)) * Math.Sin(Math.PI / (2d * n)) +
                4d / (k * k) * Math.Sin(Math.PI / (2d * m)) * Math.Sin(Math.PI / (2d * m));
            ln = 4d / (h * h) * Math.Sin(Math.PI * (n - 1) / (2d * n)) * Math.Sin(Math.PI * (n - 1) / (2d * n)) +
                4d / (k * k) * Math.Sin(Math.PI * (m - 1) / (2d * m)) * Math.Sin(Math.PI * (m - 1) / (2d * m));
        }
        public double m1(double y)
        {
            return Math.Sin(Math.PI * y) * Math.Sin(Math.PI * y);
        }
        public double m2(double y)
        {
            return Math.Abs(Math.Exp(Math.Sin(Math.PI * y)) - 1);
        }
        public double m3(double x)
        {
            return x * (1 - x);
        }
        public double m4(double x)
        {
            return x * (1 - x) * Math.Exp(x);
        }
        public double f(double x, double y)
        {
            return Math.Abs(x - y);
        }
        private void BorderConditions() //граничные условия
        {
            double h = (b - a) / (double)n;
            double k = (d - c) / (double)m;

            for (int i = 0; i < n; i++)
                V[0, i] = m3(a + i * h);
            for (int i = 0; i < n; i++)
                V[m - 1, i] = m4(a + i * h);

            for (int j = 0; j < m; j++)
                V[j, 0] = m1(c + j * k);
            for (int j = 0; j < m; j++)
                V[j, n-1] = m2(c + j * k);
        }
        private double ReturnParametrs(int k)
        {
            return 1d / ((l1 + ln) / 2d + (ln - l1) / 2d * Math.Cos(Math.PI / (2d * k) * (1 + 2 * k)));
        }
        public void ChebyshevMethood(int k)
        {
            double[] tk = new double[k]; //для параметров метода
            double h2 = 1d / (h * h);
            double k2 = 1d / (k * k);
            double A = -2 * (1d / h2 + 1d / k2);
            for (int i = 0; i < k; i++)
                tk[i] = ReturnParametrs(i);
            double V_old; double error;
            //итерация метода
            while (n <= Nmax)
            {
                //for (int j = 1; j < m - 1; j++)
                //    for (int i = 1; i < n - 1; i++)
                //        r[j, i] = V[j, i] * A + h2 * (V[j, i + 1] + V[j, i - 1]) + k2 * (V[j + 1, i] + V[j - 1, i])
                //            + f(a + i * h, c + j * k); //невязка на текущей итерации
                //for (int p = 0; p < k; p++)
                //{
                //    for (int j = 1; j < m - 1; j++)
                //        for (int i = 1; i < n - 1; i++)
                //            V[j, i] = V[j, i] + tk[p] * r[j, i];
                //}
                //if (eps <= Epsmax)
                //    break; //досрочный выход из цикла
            }
        }
    }
}
