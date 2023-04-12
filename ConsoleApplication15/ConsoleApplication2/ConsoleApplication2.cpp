#include <iostream>
using namespace std;

int main()
{
    int arr[100] = {};   
    int n; // розмір "динамічного"(нет) масива
    cout << "Type array size: ";
    cin >> n; // користувач може написати довільний розмір від 1 до 100

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 10;
        cout << arr[i] << ' ';
    }
}