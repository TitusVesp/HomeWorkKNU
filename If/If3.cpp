//
//If24.��� ������� ������������� x ����� �������� ��������� ������� f, ��� -
//�������� ������������ �������� :

#include "If_main.h"
#include <math.h>
#include <iomanip>
void if3()
{
	double x = 0, res = 0;

	cout << "���i�� X" << endl;
	cin >> x;

	if (x > 0) res = 2 * sin(x);
	else res = 6 - x;

	cout << "���������: " << fixed << setprecision(3) << res << endl;;
}