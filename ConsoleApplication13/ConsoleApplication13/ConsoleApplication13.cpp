#include <iostream>
using namespace std;

// Прототип функцій - це створення функції(визначення сігнатури функції) без визначення
// тіла функції(код що виконується).

int add(int a, int b);
int add2(int a, int b);



int main()
{
    cout << add2(1, 2);
}

int add2(int a, int b) { return add(a, a) + add(b, b); }

int add(int a, int b) { return a + b; }