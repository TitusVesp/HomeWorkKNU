
//Boolean22.���� ����������� �����.��������� ���������� ������������ :
//������ ������� ����� �������� ������������ ��� ��������� ����� -
//��������������.

#include "Boolean_main.h"

void boolean2()
{
	string num;

	cout << "���i�� 3-� ������ �����!" << endl;
	cin >> num;

	if (num.size() != 3)
	{
		cout << "�� ����� �� �������� ��������!" << endl;

		return;
	}

	for (int i = 0; i < num.size(); i++)
	{
		if (num[i] < 48 or num[i] > 57)
		{
			cout << "�� ����� �� �������� ��������!" << endl;

			return;
		}
	}

	if (num[0] > num[1] and num[1] > num[2]) cout << "����� �����������i �� ��������!" << endl;
	else  if (num[0] < num[1] and num[1] < num[2]) cout << "����� ����������i �� ���������!" << endl;
	else cout << "����� ����������i ��������!" << endl;
	
}