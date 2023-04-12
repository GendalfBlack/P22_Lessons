#include <iostream>
using namespace std;

// ���� 38. ����������� ������� ������

/*
	������ 1. �������� ������� �� ������ ��������� �����, ���� ����� �� �����
	����� x �� ������� ����� ����� �� ���� ����� � ����� ���� �������� �����
	���� ����� x.���� x �� ��������� � �����, �� ����� ����������� ����������
	�������.
*/

int indexOfX(int* arr, int n, int x) {
	for (int i = 0; i < n; i++) // ������ ����� ������� �������� X � �����
	{
		if (arr[i] == x) { return i; }
	}
	return -1;
}

// ������� ��������� �����
// |         ������ ��������� �����
// |         |
// V         V
int* removeX(int* arr, int n, int x) {
	int index = indexOfX(arr, n, x);
	if (index == -1) // ���� �������� ��� � �� ��������� � �����
	{
		return arr;
	}
	else {
		int* arr2 = new int[n - 1]; // ����� ��������� ����� �� 1 ����� �� ������
		for (int i = 0; i < index; i++)
		{
			arr2[i] = arr[i];
		}
		for (int i = index + 1; i < n; i++)
		{
			arr2[i - 1] = arr[i];
		}
		delete[] arr;
		return arr2;
	}
}
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int x;
	cin >> x;
	while (indexOfX(arr, n, x) > 0) // ���� �� ���� ������ �� � ������� � ��������� ��������� �� ��� ��, ���� ����� ������� �������
	{
		arr = removeX(arr, n, x);
		n--; // ����'������ �������� ����� ������ ���� ��������� ��������
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
}
