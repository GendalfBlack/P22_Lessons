#include <iostream>
using namespace std;

// Задача 3. Користувач передає в функцію динамічний масив та показчик що 
// зберігає адресу змінної що відповідає за розмір масива. Видалити останній елемет
// массива, перезаписавши його змінну розміру та повернути новий массив. 
// f1(arr, n) -> arr зменшується n зменшується

// int* -> повертає новий массив
int* f1(int* arr, int* n) {
    int* arr2 = new int[*n - 1];
	for (int i = 0; i < *n - 1; i++)
	{
		*(arr2 + i) = *(arr + i); // arr2[i] = arr[i];
	}
	delete[] arr;
	arr = arr2;
	--*n; // -> (*n)--, префіксний -- спочатку чекає значення по показчику, 
					 // а потім зменшує його
	return arr;
}

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) { arr[i] = rand()%10 + 1; cout << arr[i] << ' '; }
	cout << '\n';
	arr = f1(arr, &n);
	for (int i = 0; i < n; i++) { cout << arr[i] << ' '; }
}
