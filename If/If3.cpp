//
//If24.Для данного вещественного x найти значение следующей функции f, при -
//нимающей вещественные значения :

#include "If_main.h"
#include <math.h>
#include <iomanip>
void if3()
{
	double x = 0, res = 0;

	cout << "Ведiть X" << endl;
	cin >> x;

	if (x > 0) res = 2 * sin(x);
	else res = 6 - x;

	cout << "Результат: " << fixed << setprecision(3) << res << endl;;
}