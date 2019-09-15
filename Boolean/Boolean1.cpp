
//Boolean12.Даны три целых числа : A, B, C.Проверить истинность высказыва -
//ния : «Каждое из чисел A, B, C положительное».

#include "Boolean_main.h"

void boolean1()
{
	int a = 0, b = 0, c = 0;

	cout << "Ведiть А" << endl;
	cin >> a;
	cout << "Ведiть B" << endl;
	cin >> b;
	cout << "Ведiть C" << endl;
	cin >> c;

	bool flag = false; 

	if (a > 0 && b > 0 && c > 0) flag = true;

	if (flag) cout << "Так, всi додатнi" << endl;
	else cout << "Нi, одне з чисел не вiдповiдає умовi!" << endl;
}