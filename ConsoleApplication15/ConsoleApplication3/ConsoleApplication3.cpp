#include <iostream>
using namespace std;

int main()
{
    int n; // ����� ���������� ������
    cout << "Type array size: ";
    cin >> n; // ���������� ���� �������� �������� �����

    // int* -> �� ��� ����� ���� �������� ������ ����̲���� �����

    // new int[n] -> �� �������� �� ���������� �������� ���'�� �� n ��������

    int* arr = new int[n];

}
