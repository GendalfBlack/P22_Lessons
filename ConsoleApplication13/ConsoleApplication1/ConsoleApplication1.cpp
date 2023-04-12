#include <iostream>
using namespace std;

// Перевантаження функцій - це задання функцій з різними сігнатурами, але однаковими 
// іменами для організації універсальної роботи функції

int D(int a, int b, int c);
int D(int b, int c);

int main()
{
    cout << D(2, 5, -7.2);
}

int D(int a, int b, int c) {return b * b - 4 * a * c;}
int D(int b, int c) {return b * b - 4 * 1 * c;}