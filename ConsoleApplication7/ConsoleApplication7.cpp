#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// ������ 1. ���������� ������� ��� ����� ��� ��������
	// �������� �������� ����� ����� �� �������� 3 �� 5 � ��������
	// ����� � �����, �� ����� 3 �� 5
	//	int a, b;
//	cout << "������ ����� �����: ";
//	cin >> a;
//	cout << "������ ����� �����: ";
//	cin >> b;
//
//	/*for (int i = a; i <= b; i++)
//	{
//		if (i % 3 == 0 && i % 5 == 0)
//		{
//			cout << i << ' ';
//		}
//	}*/
//
//	int i = a;
//CycleStart:
//	if (i % 3 == 0 && i % 5 == 0)
//	{
//		cout << i << ' ';
//;	}
//	i++;
//	if (i <= b) { goto CycleStart; }

	// ������ 2. �������. �������. 4 ������. ʳ������ ������. 
	// �������� ������. ������� ������ ������ ������� ������.
	// ������� ��������.

	float money = 0, sum = 0;
	int amount, discount, number, price, choice;
	int t1 = 10, t2 = 20, t3 = 30, t4 = 40;
	int client = 1;
NewClient:
	printf("������� ��������: %.2f ���.\n", money);
	printf("1. ����� 1 - 30 ���. %d\n", t1);
	printf("2. ����� 2 - 60 ���. %d\n", t2);
	printf("3. ����� 3 - 45 ���. %d\n", t3);
	printf("4. ����� 4 - 12 ���. %d\n", t4);

	printf("�볺�� #%d\n", client);
NewTovar:
	printf("������ ����� ������: ");
	cin >> number;
	price = number == 1 ? 30 : number == 2 ? 60 : number == 3 ? 45 : 12;
	printf("������ ������� ������: ");
	cin >> amount;
	printf("�� � ������ �� �����? 1.���, 2.ͳ\n");
	cin >> choice;
	if (choice == 1)
	{
		printf("������ ������ � %: ");
		cin >> discount;
		sum += price * amount - price * amount * (discount / 100.0);
	}
	else {
		sum += price * amount;
	}
	printf("������ ����� ����� �� ������? 1.���, 2.ͳ\n");
	cin >> choice;
	if (choice == 1) { goto NewTovar; }
	else {
		printf("����� �� �������! �� ������ %.2f ���.\n", sum);
		money += sum;
		client++;
		sum = 0;
		goto NewClient;
	}
}
