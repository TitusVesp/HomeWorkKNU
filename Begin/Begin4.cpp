
//Begin12.Даны катеты прямоугольного треугольника a и b.Найти его гипоте -
//нузу c и периметр P :

#include "Begin_main.h"

void Zadacha4()
{
	cout << "Ведiть А" << endl;

	double a = 0, b = 0;

	cin >> a;

	cout << "Ведiть B" << endl;

	cin >> b;

	double c = sqrt(a*a + b*b);

	double p = a + b + c;

	cout << "C = " << fixed << setprecision(3) << c << endl << "P = " << p << endl;
}