
//If12�.���� ��� �����.����� ���������� �� ���.

#include "If_main.h"

void if1()
{
	int a = 0, b = 0, c = 0;

	cout << "���i�� �" << endl;
	cin >> a;
	cout << "���i�� B" << endl;
	cin >> b;
	cout << "���i�� C" << endl;
	cin >> c;

	int min = 0;

	if (a < b and a < c) min = a;
	else if (b < a and b < c) min = b;
	else min = c;

	cout << "�������� �����: " << min << endl;
}