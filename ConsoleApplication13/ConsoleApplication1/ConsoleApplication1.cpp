#include <iostream>
using namespace std;

// �������������� ������� - �� ������� ������� � ������ ����������, ��� ���������� 
// ������� ��� ���������� ����������� ������ �������

int D(int a, int b, int c);
int D(int b, int c);

int main()
{
    cout << D(2, 5, -7.2);
}

int D(int a, int b, int c) {return b * b - 4 * a * c;}
int D(int b, int c) {return b * b - 4 * 1 * c;}