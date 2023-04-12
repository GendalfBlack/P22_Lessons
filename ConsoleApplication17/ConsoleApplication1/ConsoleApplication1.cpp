#include <iostream>
using namespace std;

/*
Задача 2. Створити функцію що приймає два динамічних масива A, B, та їх відповідні розміри
та повертає новий масив в якому є всі елементи з першого та другого масивів.
*/

int* mergeArrays(int* arr1, int* arr2, int n1, int n2) {
    int* arr3 = new int[n1 + n2];
	for (int i = 0; i < n1; i++)
	{
		arr3[i] = arr1[i];
	}
	for (int i = 0; i < n2; i++)
	{
		// i+n1 це зміщення в новому масиві в індексах на n1
		arr3[i + n1] = arr2[i];
	}
	return arr3;
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
	int n2;
	cin >> n2;
	int* arr2 = new int[n];
	for (int i = 0; i < n2; i++)
	{
		cin >> arr2[i];
	}

	int* arr3 = mergeArrays(arr,arr2,n,n2);
	for (int i = 0; i < n+n2; i++)
	{
		cout << arr3[i] << ' ';
	}
}
