#include <iostream>
using namespace std;

bool f1(char a, char b) {
	if (a >= 'a' && a <= 'z' && b >= 'a' && b <= 'z') { return a > b; }
	else { return false; }
}
bool f2(char a, char b) {
	if (a >= 'A' && a <= 'Z' && b >= 'A' && b <= 'Z') { return a > b; }
	else { return false; }
}
bool f3(char a, char b) {
	if (a >= 'a' && a <= 'z' && b >= 'A' && b <= 'Z') { return a > b + 32; }
	else if (a >= 'A' && a <= 'Z' && b >= 'a' && b <= 'z') { return a + 32 > b; }
	else if (a >= 'a' && a <= 'z' && b >= 'a' && b <= 'z') { return a > b; }
	else if (a >= 'A' && a <= 'Z' && b >= 'A' && b <= 'Z') { return a > b; }
	else { return false; }
}

void bubblesort(char* arr, int n, bool (*comparator)(char, char)) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (comparator(arr[j], arr[j + 1]))
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main()
{
	/*
	Задачі.

	Задача 1. Створити фунції-компаратори, що буде перевіряти маленькі літери 
	латинського алфавіту і повертати true/false в залежності від того як вони стоять
	за алфавітом чи ні.

	Задача 2. Створити фунції-компаратори, що буде перевіряти великі літери
	латинського алфавіту і повертати true/false в залежності від того як вони стоять
	за алфавітом чи ні.

	Задача 3. Створити фунції-компаратори, що буде перевіряти і маленькі і великі літери
	латинського алфавіту і повертати true/false в залежності від того як вони стоять
	за алфавітом чи ні.

	Задача 4. Написати баблсорт що буде сортувати літери в слові(масиві символів, char*)
	введеному користувачем. Використати всі функції з попередніх задач як параметр функції
	сортування.
	*/

	char* word = new char[50];
	cout << "Small: ";
	cin >> word;
	bubblesort(word, 50, f1);
	cout << word << endl;

	cout << "Big: ";
	cin >> word;
	bubblesort(word, 50, f2);
	cout << word << endl;

	cout << "Mixed: ";
	cin >> word;
	bubblesort(word, 50, f3);
	cout << word << endl;
}