#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // rand �� ����� while, do while
    //int x = rand(); // �� 0 �� 32767
    //int min = -5;
    //int max = 5;
    //int random = x % (max - min + 1) + min; // �� -5 �� 5
    //cout <<  random;

    /*
    while �����:
    --->���� ����(��� �����)

    while(�����){ ���� ����(��� �����) }    
    */
    
    // ������ 1. ������� 10 ���������� ����� �� 0 �� 100

    //int i = 0;      // ��������
    //while (i < 10)  // ���������� 10 ����
    //{
    //    cout << rand() % 101 << ' ';
    //    i++;        // �������� i �� 1 � ���� �����
    //}

    // ������ 2. ���������� ������� 2 �����, ������� � �����
    // ��������, ���������� ������ ����������� 10 ���������� 
    // ����� ����� ��������

    int a, b;
    int sum = 0;
    int n = 100;
    cout << "������ ������� ��������: ";
    cin >> a;
    cout << "������ ����� ��������: ";
    cin >> b;

    int i = 0;
    while (i < n)
    {
        int r = rand() % (b - a + 1) + a;
        cout << r << ' ';
        sum += r;
        i++;
    }
    cout << "\nsum = " << sum << "\navrg = " << sum / 100.0;



}
