#include <iostream>
using namespace std;

// Задача 2. Створити функцію що приймає посилання на масив та друкує
// цей масив на екран у форматі [a,b,c,d...] та звільняє місце в пам'яті
// цього масива та обнуляє показчик на масив.

void f2(int*& arr, int n) {
	cout << '[';
	for (int i = 0; i < n; i++)
	{	
		if (i == n-1){ cout << arr[i]; }
		else { cout << arr[i] << ',';}
	} 
	cout << ']';
	delete[] arr;
	arr = nullptr;
}

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) { arr[i] = rand() % 10 + 1; cout << arr[i] << ' '; }
	cout << '\n';
	f2(arr, n);

	
}