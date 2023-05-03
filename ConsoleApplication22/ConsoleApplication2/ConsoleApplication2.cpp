#include <iostream>
using namespace std;

/*Показчики на функції*/
// показчиком на функцію називається показчик, що має ідентичну 
// сигнатуру що і функції на які він може вказувати і він надає
// до певної функції доступ через себе

bool spdannya(int a, int b) { return a < b; }
bool zrostannya(int a, int b) { return a > b; }

bool (*comparator)(int, int) = zrostannya;
// показчик на функцію має бути обов'язково тої самої сігнатури що і функції на які він вказує
// bool			- тип значення що повертається
// (int,int)	- параметри функції
// comparator   - назва показчика


// bubblesort приймає массив, кількість елементів, та функцію що вирішує спосіб сортування
void bubblesort(int* arr, int n, bool (*comparator)(int, int)) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if (comparator(arr[j], arr[j+1]))
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) { arr[i] = rand() % 10 + 1; cout << arr[i] << ' '; } cout << endl;
	bubblesort(arr, n, zrostannya);
	for (int i = 0; i < n; i++) { cout << arr[i] << ' '; }
}