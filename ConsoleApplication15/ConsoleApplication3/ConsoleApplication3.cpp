#include <iostream>
using namespace std;

int main()
{
    int n; // розмір динамічного масива
    cout << "Type array size: ";
    cin >> n; // користувач може написати довільний розмір

    // int* -> це тип даних який коректно зберігає ДИНАМІЧНИЙ масив

    // new int[n] -> це операція по динамічному виділенню пам'яті на n елементів

    int* arr = new int[n];

}
