#include <iostream>
using namespace std;

// Задача 1. Створити функцію що приймає два показчики на елементи масива
// та повертає відстань між цими елементами в масиві

// Задача 2. Створити функцію що приймає масив та його розмір та повертає
// відстань між найменшим та найбільшим елементами

int f1(int* a, int* b) {
    return b - a;
}

int* minPtr(int* arr, int n) {
	int imin = 0;
	for (int i = 1; i < n; i++) { if (arr[i] < arr[imin]) { imin = i; } }
	return &arr[imin];
}
int* maxPtr(int* arr, int n) {
	int imax = 0;
	for (int i = 1; i < n; i++) { if (arr[i] > arr[imax]) { imax = i; } }
	return &arr[imax];
}
int f2(int* arr, int n)
{
	return abs(minPtr(arr, n) - maxPtr(arr, n));
}

int main()
{
	srand(time(0));
    int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 10 + 1;
		cout << arr[i] << ' ';
	}

	cout << '\n' << f2(arr, 10);
}