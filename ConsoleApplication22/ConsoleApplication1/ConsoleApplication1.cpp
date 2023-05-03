#include <iostream>
using namespace std;

/* remove(int pos): видаляє ціле число в позиції pos з масиву. (1.5 баллів) */

int* arr;
int n;

void remove(int pos) {
    int* arr2 = new int[n - 1];
    for (int i = 0; i < pos; i++) { arr2[i] = arr[i]; }
    for (int i = pos+1; i < n; i++) { arr2[i-1] = arr[i]; }
    delete[] arr;
    arr = arr2;
    n--;
}

int main()
{
    cin >> n;
    arr = new int[n];

    remove(2);
}
