
//Boolean32.���� ����� ����� a, b, c, ���������� ��������� ���������� ��� -
//���������.��������� ���������� ������������ : ������������ �� ����� -
//���� a, b, c �������� �������������.

#include "Boolean_main.h"

void boolean3()
{
	int a = 0, b = 0, c = 0;

	cout << "���i�� �" << endl;
	cin >> a;
	cout << "���i�� B" << endl;
	cin >> b;
	cout << "���i�� C" << endl;
	cin >> c;

	int Ar[] = { a,b,c };
	
	bool flag = false;
	int stk = 0;

	for (int i = 1; i < 3; i++)
		for (int j = 0; j < 3 - i; j++)
			if (Ar[j] > Ar[j + 1])
			{
				stk = Ar[j];
				Ar[j] = Ar[j + 1];
				Ar[j + 1] = stk;
			}

	if (Ar[2] >= Ar[1] + Ar[0])
	{
		cout << "��������� � ������ ��������� �� ����!" << endl;
	}
	else
	{
		if (Ar[2] * Ar[2] < Ar[1] * Ar[1] + Ar[0] * Ar[0])
		{
			cout << "�� ������������ ���������" << endl;
		}
		else
		{
			if (Ar[2] * Ar[2] == Ar[1] * Ar[1] + Ar[0] * Ar[0])
				flag = true;
			else cout << "�� ���������� ���������" << endl;
		}
	}

	if (flag) cout << "�� ����������� ���������" << endl;
}