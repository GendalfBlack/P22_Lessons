#include <iostream>
using namespace std;

/*Задача 1. Користувач пише своє ім'я, програма перевіряє
чи велика літера написана першої в імені, у випадку великої
вона виводить вітання "Hello, name", у випадку маленької
літери вона міняє літеру на велику та виводить аналогічне 
вітання*/

int main()
{
    char* name = new char[50];
    fgets(name, 50, stdin);
	if (name[0] >= 'A' && name[0] <= 90)
	{
		cout << "Hello, " << name << "!";
	}
	else {
		name[0] = name[0] - 32;
		cout << "Hello, " << name << "!";
	}
}
