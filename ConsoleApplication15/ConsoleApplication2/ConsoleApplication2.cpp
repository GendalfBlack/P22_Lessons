#include <iostream>
using namespace std;

int main()
{
    int arr[100] = {};   
    int n; // ����� "����������"(���) ������
    cout << "Type array size: ";
    cin >> n; // ���������� ���� �������� �������� ����� �� 1 �� 100

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 10;
        cout << arr[i] << ' ';
    }
}