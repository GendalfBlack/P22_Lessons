#include <iostream>
#include <Windows.h>
using namespace std;

// Функція - це іменований фрагмент коду що може бути викликаний 
// за допомогою сігнатури функції.
// 
// Сігнатура функції - це 
// ТИП ЗНАЧЕННЯ ЩО ПОВЕРТАЄТЬСЯ В РЕЗУЛЬТАТІ РОБОТИ ФУНКЦІЇ,
// ІМ'Я ФУНКЦІЇ
// ПАРАМЕТРИ ЩО ПЕРЕДАЮТЬСЯ У ФУНКЦІЮ

int substruction(int a, int b) 
{ 
	int c = a - b;
	return c; 
}
// int - тип даних що повертає функція
// division - ім'я функції
// (int a, int b) - параметри що передаються в функцію
// return a - b; - тіло функції (фрагмент коду) що виконується під час виклику функції
// return - повернення (преривання для функції)

bool isDivBy7(int a) 
{
	bool f;
	if (a % 7 == 0)
	{
		f = true;
	}else{
		f = false;
	}
	return f;
}

// Функція що шукає індекс першого приголосного в слові
int f1(char word[10]) {
	for (int i = 0; i < 10; i++)
	{
		if (word[i] != 'a' && word[i] != 'o' && 
			word[i] != 'i' && word[i] != 'u' && 
			word[i] != 'y' && word[i] != 'e' && word[i] != ' ')
		{
			return i;
		}
	}
}


int main()
{
	char a[10] = "aoehello";
	cout << f1(a);
}
