#include <iostream>
using namespace std;

void printArray(int* arr, int n) {
    for (int i = 0; i < n; i++) { cout << arr[i] << ' '; }
    cout << '\n';
}

// Задача 2. Написати програму в якій користувач вводить кількість елементів масиву
// а потім програма створює два масива заданої величини з рандомними значеннями.
// Після чого створює новий масив який складається тільки з більших значень 
// з обох масивів

int main()
{
    int n;
    cout << "Type array size: ";
    cin >> n;

    int* arr = new int[n];
    int* arr2 = new int[n];
    int* arr3 = new int[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 10;
        arr2[i] = rand() % 10;
    }
    printArray(arr, n);
    printArray(arr2, n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr2[i])
        {
            arr3[i] = arr[i];
        }
        else {
            arr3[i] = arr2[i];
        }
    }
    printArray(arr3, n);
}
