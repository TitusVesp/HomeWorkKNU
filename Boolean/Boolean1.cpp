
//Boolean12.���� ��� ����� ����� : A, B, C.��������� ���������� ��������� -
//��� : ������� �� ����� A, B, C �������������.

#include "Boolean_main.h"

void boolean1()
{
	int a = 0, b = 0, c = 0;

	cout << "���i�� �" << endl;
	cin >> a;
	cout << "���i�� B" << endl;
	cin >> b;
	cout << "���i�� C" << endl;
	cin >> c;

	bool flag = false; 

	if (a > 0 && b > 0 && c > 0) flag = true;

	if (flag) cout << "���, ��i ������i" << endl;
	else cout << "�i, ���� � ����� �� �i����i�� ����i!" << endl;
}