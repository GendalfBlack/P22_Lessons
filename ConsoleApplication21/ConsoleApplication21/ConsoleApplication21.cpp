#include <iostream>
using namespace std; 

// Задачі за 23.04

/*
    Задача 3. Створити функцію, що приймає показчик на елемент та масив
    і повертає індекс цього елемента в масиві.
    int f1(int arr*, int* pa);
    cout << f1(arr, &arr[3]); ~> 3
    
    Задача 4. Створити функцію, що приймає показчик на масив і звільняє пам'ять
    цього масиву.

    Задача 5. Створити функцію, що приймає показчик на масив та його розмір та
    сортує масив.
*/

int f3(int* arr, int* pa) {
    return pa - arr;
}

void f4(int* arr) {
    delete[] arr;
}

void f5(int* arr, int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (*(arr + i)  > *(arr + j)) // arr + i -> адресса
            {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) { arr[i] = rand() % 10 + 1; cout << arr[i] << ' '; }

    f4(arr);
}
