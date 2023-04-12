#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //int x;
    //cin >> x;

    //printf("---------------------------------\n");
    //printf("|%15d|\n", x);
    //printf("---------------------------------\n");

    // вивід в форматований рядок
    // %d   -> цілі числа
    printf("|%d, %d, %d|\n", 5, 17, 8);
    // %10d -> цілі числа в полі з 10 символів праворуч
    printf("|%10d, %10d, %10d|\n", 5, 17, 8);
    // %-8d -> цілі числа в полі з 8 символів ліворуч
    printf("|%-5d, %-5d, %-5d|\n", 5, 17, 8);
    // якщо поле менше за число яке виводиться в полі, то розмір поля буде проігноровано
    printf("|%5d|\n", 123124);

    // %f   -> float значення
    printf("|%f|\n", 124.123f);
    // %.2f   -> float значення, обмежене до 2 знаків після коми
    printf("|%.2f|\n", 124.123f);
    // %10.2f -> float значення, обмежене до 2 знаків після коми в полі з 10 символів
    printf("|%10.2f|\n", 124.123f);
    // %lf  -> double значення

    // %c   -> char значення (символи)
    printf("|%2c|\n", 'g');
    printf("|%-2c|\n", 'b');
    printf("|%2c|\n", 'd');
    printf("|%-2c|\n", 'h');
    // %s   -> text значення ("sdasdas")
    printf("|%25s|\n", "asdkasdksad");
    printf("|%25s|\n", "asdasdas");
    printf("|%25s|\n", "asdqweqwksad");
    printf("|%25s|\n", "qwrqwrqwad");

}