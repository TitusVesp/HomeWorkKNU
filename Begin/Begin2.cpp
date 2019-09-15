
//Begin38.Решить линейное уравнение A·x + B = 0, заданное своими коэффици -
//ентами A и B(коэффициент A не равен 0).


#include "Begin_main.h"

void Zadacha2()
{
	cout << "Ведiть А" << endl;

	double a = 0, b = 0;

	cin >> a;

	cout << "Ведiть B" << endl;

	cin >> b;

	double x = b/a;


	cout << "X = " << fixed << setprecision(3) << x << endl;
}