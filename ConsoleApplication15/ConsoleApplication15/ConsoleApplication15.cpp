#include <iostream>
using namespace std;

void shuffle(int arr[10]);

int main()
{
    srand(time(0));
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    shuffle(arr);
}

void shuffle(int arr[10]) {
    for (int i = 0; i < 1000; i++)
    {
        int x = rand() % 10;
        int y = rand() % 10;
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << ' ';
    }
    //swap(arr[x], arr[y]);
}
