#include <iostream>
using namespace std;

// �������� ������� - �� ��������� �������(���������� �������� �������) ��� ����������
// ��� �������(��� �� ����������).

int add(int a, int b);
int add2(int a, int b);



int main()
{
    cout << add2(1, 2);
}

int add2(int a, int b) { return add(a, a) + add(b, b); }

int add(int a, int b) { return a + b; }