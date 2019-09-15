
//Boolean22.Дано трехзначное число.Проверить истинность высказывания :
//«Цифры данного числа образуют возрастающую или убывающую после -
//довательность».

#include "Boolean_main.h"

void boolean2()
{
	string num;

	cout << "Ведiть 3-х значне число!" << endl;
	cin >> num;

	if (num.size() != 3)
	{
		cout << "Ви ввели не коректне значення!" << endl;

		return;
	}

	for (int i = 0; i < num.size(); i++)
	{
		if (num[i] < 48 or num[i] > 57)
		{
			cout << "Ви ввели не коректне значення!" << endl;

			return;
		}
	}

	if (num[0] > num[1] and num[1] > num[2]) cout << "Числа розташованнi по спаданню!" << endl;
	else  if (num[0] < num[1] and num[1] < num[2]) cout << "Числа розташованi по зростанню!" << endl;
	else cout << "Числа розташованi хаотично!" << endl;
	
}