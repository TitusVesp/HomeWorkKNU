
//Boolean40.���� ���������� ���� ��������� ����� ��������� ����� x1, y1,
//x2, y2(����� �����, ������� � ��������� 1�8).��������� ���������� �� -
//����������: ����� �� ���� ��� ����� ������� � ������ ���� �� ������.

#include "Boolean_main.h"

void boolean4()
{
	int x1 = 0, y1 = 0, x2 = 0,y2 = 0;

	cout << "���i�� X1" << endl;
	cin >> x1;
	cout << "���i�� Y1" << endl;
	cin >> y1;
	cout << "���i�� X2" << endl;
	cin >> x2;
	cout << "���i�� Y2" << endl;
	cin >> y2;

	if (0 > x1 or x1 > 9 or 0 > x2 or x2 > 9 or 0 > y1 or y1 > 9 or 0 > y2 or y2 > 9)
	{
		cout << "����� �� �������i ���i!" << endl;

		return;
	}

	bool flag = false;

	if (x1 + 2 == x2 or x1 - 2 == x2 or x1 + 1 == x2 or x1 - 1 == x2)
	{
		if (y1 + 1 == y2 or y1 - 1 == y2 or y1 + 2 == y2 or y1 - 2 == y2)
		{
			flag = true;
		}
	}

	if (flag) cout << "����!" << endl;
	else cout << "�� ����!" << endl;
}