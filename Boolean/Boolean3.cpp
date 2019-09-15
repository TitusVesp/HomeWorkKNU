
//Boolean32.Даны целые числа a, b, c, являющиеся сторонами некоторого тре -
//угольника.Проверить истинность высказывания : «Треугольник со сторо -
//нами a, b, c является прямоугольным».

#include "Boolean_main.h"

void boolean3()
{
	int a = 0, b = 0, c = 0;

	cout << "Ведiть А" << endl;
	cin >> a;
	cout << "Ведiть B" << endl;
	cin >> b;
	cout << "Ведiть C" << endl;
	cin >> c;

	int Ar[] = { a,b,c };
	
	bool flag = false;
	int stk = 0;

	for (int i = 1; i < 3; i++)
		for (int j = 0; j < 3 - i; j++)
			if (Ar[j] > Ar[j + 1])
			{
				stk = Ar[j];
				Ar[j] = Ar[j + 1];
				Ar[j + 1] = stk;
			}

	if (Ar[2] >= Ar[1] + Ar[0])
	{
		cout << "Трикутник з такими сторонами не існує!" << endl;
	}
	else
	{
		if (Ar[2] * Ar[2] < Ar[1] * Ar[1] + Ar[0] * Ar[0])
		{
			cout << "Це гострокутний трикутник" << endl;
		}
		else
		{
			if (Ar[2] * Ar[2] == Ar[1] * Ar[1] + Ar[0] * Ar[0])
				flag = true;
			else cout << "Це тупокутний трикутник" << endl;
		}
	}

	if (flag) cout << "Це прямокутний трикутник" << endl;
}