#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // ������ 3. ���������� ������� �'��������� �����, �������� �������� �� ����� � �������
    // ���������� �������.
    int x;
    cout << "������ 5������ �����: ";
    cin >> x;
    if (x < 100000 && x >= 10000)
    {
        int n1 = x % 10;
        int n2 = x / 10 % 10;
        int n3 = x / 100 % 10;
        int n4 = x / 1000 % 10;
        int n5 = x / 10000;

        int y = n1 * 10000 + n2 * 1000 + n3 * 100 + n4 * 10 + n5;
        cout << y;
    }
    else {
        cout << "�������";
    }
    
}
