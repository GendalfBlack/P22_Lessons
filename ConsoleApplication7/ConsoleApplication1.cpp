#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// Задача 3. Знайти найбільше спільний дільник між числами a,b що ввів користувач.

	/*int a, b;
	cin >> a >> b;
	int i = 1, max = a > b ? a : b;
	while (i < max)
	{
		if (a % i == 0 && b % i == 0)
		{
			cout << i << ' ';
		}
		i++;
	}*/

	// Задача 4. Вивести трикутник з зірочок в консоль

	int x = 1;
	int y = 4;

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << '*';
		}
		cout << '\n';
		x++;
	}

	/*

	*
	* *
	* * *
	* * * *
	
	*/
}
