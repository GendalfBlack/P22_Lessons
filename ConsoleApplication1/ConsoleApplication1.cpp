#include <iostream>
#include <Windows.h> // �������� ��� ���������� ������ ������

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int x, y;

	cout << "������ ����� �����:";
	cin >> x;
	// x = input()
	cout << "������ ����� �����:";
	cin >> y;
	cout << x << " + " << y << " = " << x + y;
}
