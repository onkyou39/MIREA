#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int sign(double x)
{
	if (x > 0)
	{
		return 1;
	}
	if (x == 0)
	{
		return 0;
	}
	return -1;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double x;

	cout << "������� ����� ��� ����������� �����:" << endl;
	cin >> x;
	switch (sign(x))
	{
	case 1:
		cout << "����� " << x << " �������������" << endl;
		break;
	case 0:
		cout << "����� " << x << " ����� ����" << endl;
		break;
	case -1:
		cout << "����� " << x << " �������������" << endl;
		break;
	default:
		break;
	}
	return 0;
}