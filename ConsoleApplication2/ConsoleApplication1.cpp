#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float f;
    cout << "Введіть кількість кілограм м'яса риби: ";
    cin >> f;

    int kg, g;
    kg = int(f); // (int)f
    g = f*1000 - kg*1000;
    //cout << kg << "кг " << g << "г";
    printf("%dкг %dг", kg, g); // %d вказівник програмі підставляти ціле число

}