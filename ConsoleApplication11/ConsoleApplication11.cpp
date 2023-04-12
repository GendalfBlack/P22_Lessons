#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	const int size = 10; // ���������� ������ ������
	int arr[size] = {}; // ��������� �� ������������ ������ ������ (��� ��������)

	for (int i = 0; i < size; i++) // ���� �� �� ��������
	{
		arr[i] = rand() % 90 + 10; // ��������� ���������� ����� ��� ������� ��������
		cout << arr[i] << ' '; // ���� ������� �������� ����� �����
	}

	for (int i = 0; i < size; i++) // ������� ����, �� �������� �������� ��� �������
								   // ��������
	{
		for (int j = i + 1; j < size; j++) // �������� ���� ���� ������ ²� ����������
			// �������� ���������� ����� �� ���� ������
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		cout << '\n';
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		for (int k = 0; k <= i; k++)
		{
			cout << arr[k] << ' '; // ���� ������� �������� ����� �����
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		for (int k = i+1; k < size; k++) // ���� �� �� ��������
		{
			cout << arr[k] << ' '; // ���� ������� �������� ����� �����
		}
	}
}
