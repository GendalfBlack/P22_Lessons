#include <iostream>
using namespace std; 

/* Динамічні масиви. Задача з уроку 
    Задача 2. Створити двовимірний динамічний масив нецілих чисел.
    Заповнити його за правилом:
    кожний елмент дорівнює "номер рядка. номер стовпчика"
    наприклад елемент в 4 рядку і 7 стовпчику буде нецілим числом 3.6
    вивести на екран за допомогою функції
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
    