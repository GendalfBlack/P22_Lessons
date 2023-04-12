#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //system("color 5");

    // Задача 1. Користувачу задається питання, надаються варіанти відповідей по 
    // принципу вікторини. Користувач вводить правильний варіант, програма 
    // відповідає чи правильна відповідь на питання

    cout << "Як звуть викладача?\n1.Олександр\n2.Juan\n3.Віталій\n";
    int x;
    cin >> x;
    
    if (x == 1) { cout << "Вірно!"; }
    else if (x == 2) { cout << "Не вірно!"; }
    else { cout << "Не вірно!"; }

    cout << (x == 1 ? "Вірно!" : "Не вірно!");
    
    
    switch (x) // працює тільки зі змінними типу цілих чисел (int, char, short ...)
    {
    case 1: cout << "Вірно!"; break; // case -> if (x == 1) ... break; -> }
    case 2: cout << "Не вірно!"; break;
    default: cout << "Не вірно!"; break; // default -> else
    }


}