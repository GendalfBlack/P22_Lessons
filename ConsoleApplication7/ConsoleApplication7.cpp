#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// Задача 1. Користувач вводить два числа межі діапазону
	// програма перевіряє кожне число на кратність 3 та 5 і виводить
	// тільки ті числа, що кратні 3 та 5
	//	int a, b;
//	cout << "Введіть перше число: ";
//	cin >> a;
//	cout << "Введіть друге число: ";
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

	// Задача 2. Магазин. Виручка. 4 товара. Кількість товара. 
	// Наявність знижки. Покупці можуть купить декілька товарів.
	// Декілька покупців.

	float money = 0, sum = 0;
	int amount, discount, number, price, choice;
	int t1 = 10, t2 = 20, t3 = 30, t4 = 40;
	int client = 1;
NewClient:
	printf("Виручка магазину: %.2f грн.\n", money);
	printf("1. Товар 1 - 30 грн. %d\n", t1);
	printf("2. Товар 2 - 60 грн. %d\n", t2);
	printf("3. Товар 3 - 45 грн. %d\n", t3);
	printf("4. Товар 4 - 12 грн. %d\n", t4);

	printf("Клієнт #%d\n", client);
NewTovar:
	printf("Введіть номер товару: ");
	cin >> number;
	price = number == 1 ? 30 : number == 2 ? 60 : number == 3 ? 45 : 12;
	printf("Введіть кількість товару: ");
	cin >> amount;
	printf("Чи є знижка на товар? 1.Так, 2.Ні\n");
	cin >> choice;
	if (choice == 1)
	{
		printf("Введіть знижку у %: ");
		cin >> discount;
		sum += price * amount - price * amount * (discount / 100.0);
	}
	else {
		sum += price * amount;
	}
	printf("Додати новий товар до кошика? 1.Так, 2.Ні\n");
	cin >> choice;
	if (choice == 1) { goto NewTovar; }
	else {
		printf("Дякую за покупку! До сплати %.2f грн.\n", sum);
		money += sum;
		client++;
		sum = 0;
		goto NewClient;
	}
}
