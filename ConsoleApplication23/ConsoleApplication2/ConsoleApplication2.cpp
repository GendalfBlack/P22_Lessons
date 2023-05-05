#include <iostream>
using namespace std;

/*Задача 2. Користувач має вибрати в якому форматі він хоче
вивести масив випадкових цілих чисел, але меню має бути 
оформлено без if/switch
1,2,3,4
[1 2 3 4]
{ 1, 2, 3, 4 }
*/

void print1(int* arr, int n) {
	for (int i = 0; i < n; i++) { cout << arr[i] << ','; } cout << "\b ";
}
void print2(int* arr, int n) {
	cout << '[';
	for (int i = 0; i < n; i++) { cout << arr[i] << ' '; }
	cout << "\b]";
}
void print3(int* arr, int n) {
	cout << "{ ";
	for (int i = 0; i < n; i++) { cout << arr[i] << ", "; }
	cout << "\b\b }";
}

void (*actions[3])(int*, int) = {print1, print2, print3};

int main()
{
	int* arr = new int[10];
	for (int i = 0; i < 10; i++) { arr[i] = rand() % 10 + 1; }

	cout << "0. - 1,2,3,4\n1. - [1 2 3 4]\n2. - { 1, 2, 3, 4 }\n";
	int n;
	cin >> n;
	actions[n](arr, 10);
}
