#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // ������ 2. ���������� ������� ��� ����� � �������� �� ���� (+,-,*,/). ��������
    // � ��������� �� ������ ����������� ������ �������� ��������

    char op;
    double a, b;
    cout << "������ ����� �����, ��������, ����� ����� �� ������� (5 + 5) ����� �����.\n";
    cin >> a >> op >> b;
    /*
    if (op == '+') { cout << a << '+' << b << '=' << a + b; }
    else if (op == '-'){ cout << a << '-' << b << '=' << a - b; }
    else if (op == '*'){ cout << a << '*' << b << '=' << a * b; }
    else if (op == '/'){ cout << a << '/' << b << '=' << a / b; }
    else { cout << "����������� ��� �������"; }
    */
    switch (op)
    {
    case '+': cout << a << '+' << b << '=' << a + b; break; 
    case '-': cout << a << '-' << b << '=' << a - b; break; 
    case '*': cout << a << '*' << b << '=' << a * b; break;
    case '/': cout << a << '/' << b << '=' << a / b; break;
    default: cout << "����������� ��� �������"; break;
    }
}