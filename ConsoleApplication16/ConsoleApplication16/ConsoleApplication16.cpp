#include <iostream>
#include <Windows.h>
using namespace std;

void printArray(int* arr, int n);
void inputArray(int* arr, int n);
bool isUnique(int* arr, int n, int k) {
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[k] && i != k)
        {
            return false;
        }
    }
    return true;
}

bool isSymetric(int* arr, int n) {
    for (int i = 0; i < n/2; i++)
    {
        if (arr[i] != arr[n-1-i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "Введіть число розмір масиву:";
    cin >> n;
    
    int* arr = new int[n];
    inputArray(arr, n);

    if (isSymetric(arr,n))
    {
        cout << "Масив симетричний!";
    }
    else {
        int* arr2 = new int[n];
        for (int i = 0; i < n; i++)
        {
            arr2[i] = arr[n - 1 - i];
        }
        printArray(arr2, n);
    }    
}


void printArray(int* arr, int n) {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }cout << "\n";
}
void inputArray(int* arr, int n) {
    for (int i = 0; i < n; i++)
    {
        cout << "Введіть " << i + 1 << " значення масиву:";
        cin >> arr[i];
    }
}