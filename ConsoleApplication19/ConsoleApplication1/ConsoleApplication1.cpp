#include <iostream>
using namespace std;

// ������ 2. �������� ������� �� ������ ����� ������� �� �������
// ������� ����� �����. ����� ������� � ������ const char*.

int length(const char* arr) {
    int s = 0;
	while (arr[s] != '\0') // ���� ������������ ���� �� ����� �� ���� �����
	{
		s++;
	}
	return s;
}

int main()
{
	cout << length("Hello world");
}
