#include <iostream>
#include <Windows.h> // б≥бл≥отека дл€ оформленн€ роботи консол≥

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int x, y;

	cout << "¬вед≥ть перше число:";
	cin >> x;
	// x = input()
	cout << "¬вед≥ть друге число:";
	cin >> y;
	cout << x << " + " << y << " = " << x + y;
}
