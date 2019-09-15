
//Boolean40.Даны координаты двух различных полей шахматной доски x1, y1,
//x2, y2(целые числа, лежащие в диапазоне 1–8).Проверить истинность вы -
//сказывания: «Конь за один ход может перейти с одного поля на другое».

#include "Boolean_main.h"

void boolean4()
{
	int x1 = 0, y1 = 0, x2 = 0,y2 = 0;

	cout << "Ведiть X1" << endl;
	cin >> x1;
	cout << "Ведiть Y1" << endl;
	cin >> y1;
	cout << "Ведiть X2" << endl;
	cin >> x2;
	cout << "Ведiть Y2" << endl;
	cin >> y2;

	if (0 > x1 or x1 > 9 or 0 > x2 or x2 > 9 or 0 > y1 or y1 > 9 or 0 > y2 or y2 > 9)
	{
		cout << "Ввели не коректнi данi!" << endl;

		return;
	}

	bool flag = false;

	if (x1 + 2 == x2 or x1 - 2 == x2 or x1 + 1 == x2 or x1 - 1 == x2)
	{
		if (y1 + 1 == y2 or y1 - 1 == y2 or y1 + 2 == y2 or y1 - 2 == y2)
		{
			flag = true;
		}
	}

	if (flag) cout << "Може!" << endl;
	else cout << "Не може!" << endl;
}