
//Begin22°.Поменять местами содержимое переменных A и B и вывести новые
//значения A и B.


#include "Begin_main.h"

void Zadacha1()
{
	cout << "Ведiть А" << endl;

	int a = 0, b = 0;

	cin >> a;

	cout << "Ведiть B" << endl;

	cin >> b;

	int temp = a;

	a = b; 
	b = temp;

	cout << "A: " << a << endl << "B: " << b << endl;
}