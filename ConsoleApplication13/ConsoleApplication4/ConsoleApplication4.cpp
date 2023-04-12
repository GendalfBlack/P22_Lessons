#include <iostream>
using namespace std;

// Завдання 6

int main()
{
    char arr[15][100];
	for (int i = 0; i < 15; i++){for (int j = 0; j < 100; j++){arr[i][j] = ' ';}}

	int x1 = rand() % 100;
	int y1 = rand() % 15;
	arr[y1][x1] = '*';

	while (true)
	{
		for (int i = 0; i < 15; i++) { 
			for (int j = 0; j < 100; j++) { 
				cout << arr[i][j] << ' ';
			} 
			cout << '\n';
		} // 1
		int x;
		cin >> x; // 2
		switch (x)
		{
		case 1: // 3
			arr[y1][x1] = ' ';
			x1--;
			arr[y1][x1] = '*';
			break;
		case 2: // 4
			arr[y1][x1] = ' ';
			y1++;
			arr[y1][x1] = '*';
			break;
		case 3: // 5
			arr[y1][x1] = ' ';
			x1++;
			arr[y1][x1] = '*';
			break;
		case 4: // 6
			arr[y1][x1] = ' ';
			y1--;
			arr[y1][x1] = '*';
			break;
		default:
			break;
		}
		system("cls"); // 7
	}
}