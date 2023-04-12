#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;
int main()
{
    // Задача 1. Огранізувати за допомогою алгоритма ВИБІРКОЮ програму
    // яка сортує елементи одразу в два напрямки (найменший елемент
    // рухається на початок і найбільший елемент рухається вкінець)
    const int size = 30;
    int arr[size] = {};
    srand(time(0));
    for (int i = 0; i < size; i++) { printf("%3d ", i); }
    cout << '\n';
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 900+100;
    }

    for (int pos = 0, pos2 = size - 1; pos <= pos2; pos++, pos2--) 
    {
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
            for (int i = 0; i < pos; i++)
            {
                printf("%3d ", arr[i]);
            }
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            for (int i = pos; i <= pos2; i++)
            {
                printf("%3d ", arr[i]);
            }
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
            for (int i = pos2 + 1; i < size; i++)
            {
                printf("%3d ", arr[i]);
            }
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        }

        int imin = pos, imax = pos2;
        for (int i = pos; i < pos2; i++)
        {
            if (arr[i] < arr[imin])
            {
                imin = i;
            }
            if (arr[i] > arr[imax])
            {
                imax = i;
            }
        }
        cout << "\n" << pos << " " << imin << " | " << pos2 << " " << imax << "\n";
        swap(arr[pos], arr[imin]);
        swap(arr[pos2], arr[imax]);
    }

    cout << "\n\n";
    for (int i = 0; i < size; i++)
    {
        printf("%3d ", arr[i]);
    }

}
