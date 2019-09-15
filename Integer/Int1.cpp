
//Integer12.Дано трехзначное число.Вывести число, полученное при прочтении
//исходного числа справа налево.

#include "Integer_main.h"

void int1()
{
	string num;

	cout << "Ведiть 3-х значне число!" << endl;
	cin >> num;

	if (num.size() != 3)
	{
		cout << "Ви ввели не коректне значення!" << endl;

		return;
	}

	cout << "Ваше число: ";

	for (int i = num.size() - 1; i != -1; i--)
	{
		cout << num[i];
	}
	cout << endl;
}