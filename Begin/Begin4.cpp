
//Begin12.���� ������ �������������� ������������ a � b.����� ��� ������ -
//���� c � �������� P :

#include "Begin_main.h"

void Zadacha4()
{
	cout << "���i�� �" << endl;

	double a = 0, b = 0;

	cin >> a;

	cout << "���i�� B" << endl;

	cin >> b;

	double c = sqrt(a*a + b*b);

	double p = a + b + c;

	cout << "C = " << fixed << setprecision(3) << c << endl << "P = " << p << endl;
}