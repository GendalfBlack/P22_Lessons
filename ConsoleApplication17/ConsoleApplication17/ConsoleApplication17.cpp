#include <iostream>
using namespace std;

// Урок 38. Багатовимірні динамічні масиви

/*
	Задача 1. Створити функцію що приймає динамічний масив, його розмір та деяке
	число x та повертає новий масив на один менше з якого було видалено перше
	таке число x.Якщо x не зустрілося в масиві, то масив повертається ідентичний
	першому.
*/

int indexOfX(int* arr, int n, int x) {
	for (int i = 0; i < n; i++) // лінійний пошук індексу елемента X в масиві
	{
		if (arr[i] == x) { return i; }
	}
	return -1;
}

// повертає динамічний масив
// |         приймає динамічний масив
// |         |
// V         V
int* removeX(int* arr, int n, int x) {
	int index = indexOfX(arr, n, x);
	if (index == -1) // якщо елементу так і не знайшлось в масиві
	{
		return arr;
	}
	else {
		int* arr2 = new int[n - 1]; // новий динамічний масив на 1 менше по розміру
		for (int i = 0; i < index; i++)
		{
			arr2[i] = arr[i];
		}
		for (int i = index + 1; i < n; i++)
		{
			arr2[i - 1] = arr[i];
		}
		delete[] arr;
		return arr2;
	}
}
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int x;
	cin >> x;
	while (indexOfX(arr, n, x) > 0) // цикл що буде шукать чи є елемент і запускать видалення до тих пір, поки такий елемент наявний
	{
		arr = removeX(arr, n, x);
		n--; // обов'язково зменшити розмір масиву після видалення елементу
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
}
