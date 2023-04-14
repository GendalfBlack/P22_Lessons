#include <iostream>
using namespace std; 

/* Динамiчнi масиви. Задача з уроку 
    Задача 2. Створити двовимiрний динамiчний масив нецiлих чисел.
    Заповнити його за правилом:
    кожний елмент дорiвнює "номер рядка. номер стовпчика"
    наприклад елемент в 4 рядку i 7 стовпчику буде нецiлим числом 3.6
    вивести на екран за допомогою функцiї
*/

void printMDA(double** arr, int m, int n) {
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) { cout << arr[i][j] << ' '; } cout << '\n';
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    double** arr = new double*[m];
    for (int i = 0; i < m; i++) { arr[i] = new double[n]; }

    for (int i = 0; i < m; i++)
    {
        double dX;
        if      (n < 10)    { dX = 0.1; }
        else if (n < 100)   { dX = 0.01; }
        else                { dX = 0.001; }
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i+1 + dX*(j+1);
        }
    }
    printMDA(arr, m, n);
}
    