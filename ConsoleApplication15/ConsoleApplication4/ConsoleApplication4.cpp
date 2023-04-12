#include <iostream>
using namespace std;

// Задача 1. Написати програму в якій користувач вводить кількість елементів масиву
// а потім заповнює кожний елемент масиву. Після чого програма видає йому суму
// всіх елементів.
int main()
{
    int n;
    cout << "Type array size: ";
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Type " << i+1 << " element: ";
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum;
}
