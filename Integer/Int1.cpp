
//Integer12.���� ����������� �����.������� �����, ���������� ��� ���������
//��������� ����� ������ ������.

#include "Integer_main.h"

void int1()
{
	string num;

	cout << "���i�� 3-� ������ �����!" << endl;
	cin >> num;

	if (num.size() != 3)
	{
		cout << "�� ����� �� �������� ��������!" << endl;

		return;
	}

	cout << "���� �����: ";

	for (int i = num.size() - 1; i != -1; i--)
	{
		cout << num[i];
	}
	cout << endl;
}