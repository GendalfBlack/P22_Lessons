#include <iostream>
#include <Windows.h>
using namespace std; 

// Функції. Прототипи. Сігнатура. 
// Рекурсивна функція - це функція що повторює алгоритм опираючись сама на себе. Функція
// під час виконання свого блоку коду може за умови викликати сама себе.

// Задача 1. Заповнити двовимірний масив 10х10 за допомогою послідовності чисел у формі
// спіралі

const int s = 10;

void spiralka(int arr[s][s], int a, int b, int dir, int i, int j, int u, int r, int d, int l)
{
	arr[i][j] = a;
	a++;
	// заповнити ряд зліва-направо
	if (j < r && dir == 0) { j++; spiralka(arr, a, b, dir, i, j, u, r, d, l); a++; u++; }
	if (i == r) { dir = 1; j--; }
	if (i < d && dir == 1) { i++; spiralka(arr, a, b, dir, i, j, u, r, d, l); a++; r++; }
	if (i == d) { dir = 2; i--; }
	if (j > l && dir == 2) { j--; spiralka(arr, a, b, dir, i, j, u, r, d, l); a++; d++;	}
	if (j == l) { dir = 3; j++; }
	if (i > u && dir == 3) { i--; spiralka(arr, a, b, dir, i, j, u, r, d, l); a++; l++; }
	if (i == u) { dir = 0; i++; }
	if (a <= b)	{ spiralka(arr, a, b, dir, i, j, u, r, d, l); }
}

int main()
{
	int arr[s][s] = {};

	spiralka(arr, 1, 100, 0, 0, 0, 0, 10, 10, 0);

	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		cout << '\n';
	}
}