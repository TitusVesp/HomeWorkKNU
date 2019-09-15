
//If12°.Даны три числа.Найти наименьшее из них.

#include "If_main.h"

void if1()
{
	int a = 0, b = 0, c = 0;

	cout << "Ведiть А" << endl;
	cin >> a;
	cout << "Ведiть B" << endl;
	cin >> b;
	cout << "Ведiть C" << endl;
	cin >> c;

	int min = 0;

	if (a < b and a < c) min = a;
	else if (b < a and b < c) min = b;
	else min = c;

	cout << "Найменше число: " << min << endl;
}