#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // rand та цикли while, do while
    //int x = rand(); // від 0 до 32767
    //int min = -5;
    //int max = 5;
    //int random = x % (max - min + 1) + min; // від -5 до 5
    //cout <<  random;

    /*
    while умова:
    --->блок коду(тіло циклу)

    while(умову){ блок коду(тіло циклу) }    
    */
    
    // Задача 1. Вивести 10 випадкових чисел від 0 до 100

    //int i = 0;      // лічилькик
    //while (i < 10)  // повторення 10 разів
    //{
    //    cout << rand() % 101 << ' ';
    //    i++;        // збільшити i на 1 в кінці цикла
    //}

    // Задача 2. Користувач вводить 2 числа, початок і кінець
    // діапазону, порахувати середнє арифметичне 10 випадкових 
    // чисел цього діапазону

    int a, b;
    int sum = 0;
    int n = 100;
    cout << "Введіть початок діапазону: ";
    cin >> a;
    cout << "Введіть кінець діапазону: ";
    cin >> b;

    int i = 0;
    while (i < n)
    {
        int r = rand() % (b - a + 1) + a;
        cout << r << ' ';
        sum += r;
        i++;
    }
    cout << "\nsum = " << sum << "\navrg = " << sum / 100.0;



}
