
//Begin22�.�������� ������� ���������� ���������� A � B � ������� �����
//�������� A � B.


#include "Begin_main.h"

void Zadacha1()
{
	cout << "���i�� �" << endl;

	int a = 0, b = 0;

	cin >> a;

	cout << "���i�� B" << endl;

	cin >> b;

	int temp = a;

	a = b; 
	b = temp;

	cout << "A: " << a << endl << "B: " << b << endl;
}