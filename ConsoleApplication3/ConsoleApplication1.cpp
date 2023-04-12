#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Задача 2. Користувач вводить два числа і оператор на вибір (+,-,*,/). Програма
    // в залежності від вибору користувача виконує відповідну операцію

    char op;
    double a, b;
    cout << "Введіть перше число, оператор, друге число по шаблону (5 + 5) через пробіл.\n";
    cin >> a >> op >> b;
    /*
    if (op == '+') { cout << a << '+' << b << '=' << a + b; }
    else if (op == '-'){ cout << a << '-' << b << '=' << a - b; }
    else if (op == '*'){ cout << a << '*' << b << '=' << a * b; }
    else if (op == '/'){ cout << a << '/' << b << '=' << a / b; }
    else { cout << "повідомлення про помилку"; }
    */
    switch (op)
    {
    case '+': cout << a << '+' << b << '=' << a + b; break; 
    case '-': cout << a << '-' << b << '=' << a - b; break; 
    case '*': cout << a << '*' << b << '=' << a * b; break;
    case '/': cout << a << '/' << b << '=' << a / b; break;
    default: cout << "повідомлення про помилку"; break;
    }
}