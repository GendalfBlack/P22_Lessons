#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
   // багатовимірні статичні масиви

	const int rows = 10, cols = 10;

	// перше число це кількість рядків, друге число кількість стовпців
	int dob[rows][cols] = { {} };
	int dob[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

	for (int i = 0; i < rows; i++) 
	{
		for (int j = 0; j < cols; j++)
		{
			dob[i][j] = rand()%90+10; 
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{			
			cout << dob[i][j] << ' ';
		}
		cout << '\n'; 
	}
}
