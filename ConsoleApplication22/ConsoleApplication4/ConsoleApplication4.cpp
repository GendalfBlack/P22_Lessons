#include <iostream>
using namespace std;

bool f1(char a, char b) {
	if (a >= 'a' && a <= 'z' && b >= 'a' && b <= 'z') { return a > b; }
	else { return false; }
}
bool f2(char a, char b) {
	if (a >= 'A' && a <= 'Z' && b >= 'A' && b <= 'Z') { return a > b; }
	else { return false; }
}
bool f3(char a, char b) {
	if (a >= 'a' && a <= 'z' && b >= 'A' && b <= 'Z') { return a > b + 32; }
	else if (a >= 'A' && a <= 'Z' && b >= 'a' && b <= 'z') { return a + 32 > b; }
	else if (a >= 'a' && a <= 'z' && b >= 'a' && b <= 'z') { return a > b; }
	else if (a >= 'A' && a <= 'Z' && b >= 'A' && b <= 'Z') { return a > b; }
	else { return false; }
}

void bubblesort(char* arr, int n, bool (*comparator)(char, char)) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (comparator(arr[j], arr[j + 1]))
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main()
{
	/*
	������.

	������ 1. �������� ������-�����������, �� ���� ��������� ������� ����� 
	����������� ������� � ��������� true/false � ��������� �� ���� �� ���� ������
	�� �������� �� �.

	������ 2. �������� ������-�����������, �� ���� ��������� ����� �����
	����������� ������� � ��������� true/false � ��������� �� ���� �� ���� ������
	�� �������� �� �.

	������ 3. �������� ������-�����������, �� ���� ��������� � ������� � ����� �����
	����������� ������� � ��������� true/false � ��������� �� ���� �� ���� ������
	�� �������� �� �.

	������ 4. �������� �������� �� ���� ��������� ����� � ����(����� �������, char*)
	��������� ������������. ����������� �� ������� � ��������� ����� �� �������� �������
	����������.
	*/

	char* word = new char[50];
	cout << "Small: ";
	cin >> word;
	bubblesort(word, 50, f1);
	cout << word << endl;

	cout << "Big: ";
	cin >> word;
	bubblesort(word, 50, f2);
	cout << word << endl;

	cout << "Mixed: ";
	cin >> word;
	bubblesort(word, 50, f3);
	cout << word << endl;
}