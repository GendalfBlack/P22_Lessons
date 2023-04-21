#include <iostream>
using namespace std;

// Задача 2. Написати функцію що приймає рядок символів та повертає
// довжину цього рядка. Рядок символів у форматі const char*.

int length(const char* arr) {
    int s = 0;
	while (arr[s] != '\0') // цикл продовжується поки не дійшли до кінця рядка
	{
		s++;
	}
	return s;
}

int main()
{
	cout << length("Hello world");
}
