#include <iostream>
#include <Windows.h>
using namespace std;

// ������� - �� ���������� �������� ���� �� ���� ���� ���������� 
// �� ��������� �������� �������.
// 
// ѳ������� ������� - �� 
// ��� �������� �� ������������ � ��������Ҳ ������ ����ֲ�,
// ��'� ����ֲ�
// ��������� �� ����������� � ����ֲ�

int substruction(int a, int b) 
{ 
	int c = a - b;
	return c; 
}
// int - ��� ����� �� ������� �������
// division - ��'� �������
// (int a, int b) - ��������� �� ����������� � �������
// return a - b; - ��� ������� (�������� ����) �� ���������� �� ��� ������� �������
// return - ���������� (���������� ��� �������)

bool isDivBy7(int a) 
{
	bool f;
	if (a % 7 == 0)
	{
		f = true;
	}else{
		f = false;
	}
	return f;
}

// ������� �� ���� ������ ������� ������������ � ����
int f1(char word[10]) {
	for (int i = 0; i < 10; i++)
	{
		if (word[i] != 'a' && word[i] != 'o' && 
			word[i] != 'i' && word[i] != 'u' && 
			word[i] != 'y' && word[i] != 'e' && word[i] != ' ')
		{
			return i;
		}
	}
}


int main()
{
	char a[10] = "aoehello";
	cout << f1(a);
}
