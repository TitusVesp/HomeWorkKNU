
//Integer30.��� ����� ���������� ����(����� ������������� �����).������ -
//���� ��������������� ��� ����� ��������, ��������, ���, � �������, �� -
//����� 20 �������� ��� 1901 ���.

#include "Integer_main.h"

void int4()
{
	int n = 0;

	cout << "���i�� �i� n: " << endl;
	cin >> n;

	if (0 > n)
	{
		cout << "�� ����� �� �������� ��������!" << endl;

		return;
	}

	if (n % 100 == 0) cout << "���� ����i���: " << n/100 << endl;
	else cout << "���� ����i���: " << n/100 + 1 << endl;
}