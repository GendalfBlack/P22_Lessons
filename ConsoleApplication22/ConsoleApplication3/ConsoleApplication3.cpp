#include <iostream>
using namespace std;
/*
Задача 1. Створити 4 функції, що приймають два значення з массива та роблять
математичну дію над ними. Використати массив функцій щоб зробити відповідні дії
над парами елементів з двох масивів.
*/

double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double div(double a, double b) { return a / b; }
double rem(double a, double b) { return double((int)a % (int)b); }

const int _size = 6;
double (*action[_size])(double, double) = { add, sub, mul, div, rem, pow };

int main()
{
    double arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
    double arr2[] = { 10,9,8,7,6,5,4,3,2,1 };

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < _size; j++)
		{
			printf("%5.1lf\t", action[j](arr1[i], arr2[i]));
		}
		cout << '\n';
	}
}
