#include <iostream>
#include <Windows.h>
using namespace std;


void printArray(int* arr, int n);
void inputArray(int* arr, int n);

// Додати один елемент на кінець динамічного масиву
int* appendArray(int* arr, int n, int x) { // int x - новий елемент що буде додано в масив
    int* arr2 = new int[n + 1];
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
    }
    arr2[n] = x;
    delete[] arr;
    return arr2;
}
// Прибрати з динамічного масива елемент з індексом i
int* removeArray(int* arr, int n, int i) {
    int* arr2 = new int[n - 1];
    for (int j = 0; j < i; j++)
    {
        arr2[j] = arr[j];
    }
    for (int j = i+1; j < n; j++)
    {
        arr2[j - 1] = arr[j];
    }
    delete[] arr;
    return arr2;
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
    int i;
    cout << "Введіть номер елементу що має бути видалений: ";
    cin >> i;
    arr = removeArray(arr, n, i - 1);
    n--;
    printArray(arr, n);
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