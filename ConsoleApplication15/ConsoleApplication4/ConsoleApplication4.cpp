#include <iostream>
using namespace std;

// ������ 1. �������� �������� � ��� ���������� ������� ������� �������� ������
// � ���� �������� ������ ������� ������. ϳ��� ���� �������� ���� ���� ����
// ��� ��������.
int main()
{
    int n;
    cout << "Type array size: ";
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Type " << i+1 << " element: ";
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum;
}
