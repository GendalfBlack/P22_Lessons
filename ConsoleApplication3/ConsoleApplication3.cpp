#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //system("color 5");

    // ������ 1. ����������� �������� �������, ��������� ������� �������� �� 
    // �������� ��������. ���������� ������� ���������� ������, �������� 
    // ������� �� ��������� ������� �� �������

    cout << "�� ����� ���������?\n1.���������\n2.Juan\n3.³����\n";
    int x;
    cin >> x;
    
    if (x == 1) { cout << "³���!"; }
    else if (x == 2) { cout << "�� ����!"; }
    else { cout << "�� ����!"; }

    cout << (x == 1 ? "³���!" : "�� ����!");
    
    
    switch (x) // ������ ����� � ������� ���� ����� ����� (int, char, short ...)
    {
    case 1: cout << "³���!"; break; // case -> if (x == 1) ... break; -> }
    case 2: cout << "�� ����!"; break;
    default: cout << "�� ����!"; break; // default -> else
    }


}