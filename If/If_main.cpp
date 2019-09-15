// If.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "If_main.h"

using namespace std;

int main()
{

	setlocale(LC_ALL, "ukr");

	int key = 0;

	while (1)
	{
		system("CLS");

		cout << "Перша задача: 1;\nДруга задача: 2;\n"
			<< "Третя задача: 3;\nЧетверта задача: 4;\nВийти: 9" << endl;

		cin >> key;

		switch (key)
		{
		case 1:
			if1();
			break;
		case 2:
			if2();
			break;
		case 3:
			if3();
			break;
		case 4:
			if4();
			break;
		default:
			cout << "Введене некоректне значення!" << endl;
			break;
		}
		system("pause");
	}
}

