#include <iostream>
using namespace std;


/*
Задача 3. Створити функцію що приймає динамічний масив, його розмір та 
виводить на екран новий!!!масив з видаленими від'ємними елементами.
*/

void removeNeg(int* arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) { if (arr[i] < 0) { count++; } }
    int* arr2 = new int[n - count];
    int i2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            arr2[i2] = arr[i]; 
            cout << arr2[i2] << ' ';
            i2++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i << ":";
        cin >> arr[i];
    }
    removeNeg(arr, n);
}
