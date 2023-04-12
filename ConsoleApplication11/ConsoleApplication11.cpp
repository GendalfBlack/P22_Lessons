#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	const int size = 10; // визначення розміру масива
	int arr[size] = {}; // створення та проставлення масива нулями (для зручності)

	for (int i = 0; i < size; i++) // цикл на всі елементи
	{
		arr[i] = rand() % 90 + 10; // генерація рандомного числа для кожного елемента
		cout << arr[i] << ' '; // вивід кожного елементу через пробіл
	}

	for (int i = 0; i < size; i++) // зовнішній цикл, що повторює алгоритм для кожного
								   // елементу
	{
		for (int j = i + 1; j < size; j++) // внутрішній цикл який працює ВІД наступного
			// елементу зовнішнього циклу до кінця масиву
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		cout << '\n';
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		for (int k = 0; k <= i; k++)
		{
			cout << arr[k] << ' '; // вивід кожного елементу через пробіл
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		for (int k = i+1; k < size; k++) // цикл на всі елементи
		{
			cout << arr[k] << ' '; // вивід кожного елементу через пробіл
		}
	}
}
