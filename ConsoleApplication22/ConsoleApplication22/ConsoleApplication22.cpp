#include <iostream>
using namespace std;
/*
    Завдання 2. Напишіть функцію, що по аналогії з завданням що ми
    розглянули на уроці (int* append(int * arr, int n)), що приймає два масива і
    створює та повертає новий масив який складається тільки з унікальних
    елементів які зустрічаються лише 1 раз в обої масивах
*/
int* add(int* arr1, int* arr2, int n1, int n2, int& counter) {
    int* arr3 = new int[n1+n2];
    for (int i = 0; i < n1; i++) { arr3[i] = arr1[i]; } // з першого в третій
    for (int i = 0; i < n2; i++) { arr3[n1+ i] = arr2[i]; } // з дрегого в третій

    int* arr4;
    counter = 0;
    for (int i = 0; i < n1+n2; i++)
    {
        bool unique = true;
        for (int j = 0; j < n1+n2; j++)
        {
            if (arr3[i] == arr3[j] && i != j) { unique = false; }
        }
        if (unique) { counter++; }
    }
    arr4 = new int[counter];
    int k = 0;
    for (int i = 0; i < n1 + n2; i++)
    {
        bool unique = true;
        for (int j = 0; j < n1 + n2; j++)
        {
            if (arr3[i] == arr3[j] && i != j) { unique = false; }
        }
        if (unique) { arr4[k] = arr3[i]; k++; }
    }
    return arr4;
}

int main()
{
    int* arr1 = new int[10];
    int* arr2 = new int[15];
    for (int i = 0; i < 10; i++) { arr1[i] = rand() % 10 + 1; }
    for (int i = 0; i < 15; i++) { arr2[i] = rand() % 10 + 1; }

    for (int i = 0; i < 10; i++) { cout << arr1[i] << ' '; } cout << endl;
    for (int i = 0; i < 15; i++) { cout << arr2[i] << ' '; } cout << endl;
    int counter;
    int* arr3 = add(arr1, arr2,10,15, counter);
    for (int i = 0; i < counter; i++) { cout << arr3[i] << ' '; }
}