#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // for

    /*
    for i in range(10):
    --->��� �����(���� ����)
    
    for (int i = 0; i < 10; i++) {
        //cout << i << ' ';
    }
    for (double i = -1; i < 1; i += 0.001)
    {
        cout << (i > -0.0001 && i < 0.0001 ? 0 : i) << ' ';
        //printf("%.15lf ", i);
    }
    */

    // ϳ��������� ����� ��� ������� �������� ������������ ����� �� ���� �������
    // ���� ���������� ����� 0. �������� ����� ����� �� ��� ����������.
    int sum = 0;
    for (int counter = 1; ;counter++)
    {
        cout << "������ " << counter << " �����: ";
        int c;
        cin >> c;
        if (c == 0)
        {
            break;
        }
        sum += c;
    }
    cout << sum;
}