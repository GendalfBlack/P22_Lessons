#include <iostream>
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

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 900 + 100;
        printf("%3d ", arr[i]);
    }

    
    for (int pos = 0; pos < size; pos++)
    {
        int imin = 0;
        for (int i = pos; i < size; i++)
        {
            if (arr[i] < arr[imin])
            {
                imin = i;
            }
        }
        cout << "\n" << imin << "\n";
        swap(arr[pos], arr[imin]);
        for (int i = 0; i < size; i++)
        {
            printf("%3d ", arr[i]);
        }
    }

    cout << "\n\n";
    for (int i = 0; i < size; i++)
    {
        printf("%3d ", arr[i]);
    }

}
