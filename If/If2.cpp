
//If22�.���� ���������� �����, �� ������� �� ������������ ���� OX � OY.
//���������� ����� ������������ ��������, � ������� ��������� ������
//�����.

#include "If_main.h"

void if2()
{
	int x = 0, y = 0;

	cout << "���i�� X1" << endl;
	cin >> x;
	cout << "���i�� Y1" << endl;
	cin >> y;

	if(x == 0 or y == 0)
	{
		cout << "�� ����� �� �������� ��������!" << endl;

		return;
	}

	if (x > 0 and y > 0) cout << "X �� Y ����������� � 1 �����i" << endl;
	else if (x < 0 and y > 0) cout << "X �� Y ����������� � 2 �����i" << endl;
	else if (x < 0 and y < 0) cout << "X �� Y ����������� � 3 �����i" << endl;
	else cout << "X �� Y ����������� � 4 �����i" << endl;
 
}