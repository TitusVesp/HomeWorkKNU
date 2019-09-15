
//If22°.Даны координаты точки, не лежащей на координатных осях OX и OY.
//Определить номер координатной четверти, в которой находится данная
//точка.

#include "If_main.h"

void if2()
{
	int x = 0, y = 0;

	cout << "Ведiть X1" << endl;
	cin >> x;
	cout << "Ведiть Y1" << endl;
	cin >> y;

	if(x == 0 or y == 0)
	{
		cout << "Ви ввели не коректне значення!" << endl;

		return;
	}

	if (x > 0 and y > 0) cout << "X та Y знаходяться в 1 чвертi" << endl;
	else if (x < 0 and y > 0) cout << "X та Y знаходяться в 2 чвертi" << endl;
	else if (x < 0 and y < 0) cout << "X та Y знаходяться в 3 чвертi" << endl;
	else cout << "X та Y знаходяться в 4 чвертi" << endl;
 
}