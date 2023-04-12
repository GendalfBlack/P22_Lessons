#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //int x;
    //cin >> x;

    //printf("---------------------------------\n");
    //printf("|%15d|\n", x);
    //printf("---------------------------------\n");

    // ���� � ������������ �����
    // %d   -> ��� �����
    printf("|%d, %d, %d|\n", 5, 17, 8);
    // %10d -> ��� ����� � ��� � 10 ������� ��������
    printf("|%10d, %10d, %10d|\n", 5, 17, 8);
    // %-8d -> ��� ����� � ��� � 8 ������� ������
    printf("|%-5d, %-5d, %-5d|\n", 5, 17, 8);
    // ���� ���� ����� �� ����� ��� ���������� � ���, �� ����� ���� ���� ������������
    printf("|%5d|\n", 123124);

    // %f   -> float ��������
    printf("|%f|\n", 124.123f);
    // %.2f   -> float ��������, �������� �� 2 ����� ���� ����
    printf("|%.2f|\n", 124.123f);
    // %10.2f -> float ��������, �������� �� 2 ����� ���� ���� � ��� � 10 �������
    printf("|%10.2f|\n", 124.123f);
    // %lf  -> double ��������

    // %c   -> char �������� (�������)
    printf("|%2c|\n", 'g');
    printf("|%-2c|\n", 'b');
    printf("|%2c|\n", 'd');
    printf("|%-2c|\n", 'h');
    // %s   -> text �������� ("sdasdas")
    printf("|%25s|\n", "asdkasdksad");
    printf("|%25s|\n", "asdasdas");
    printf("|%25s|\n", "asdqweqwksad");
    printf("|%25s|\n", "qwrqwrqwad");

}