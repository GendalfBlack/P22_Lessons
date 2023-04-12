#include <iostream>
using namespace std;

// шаблон - це спосіб задання функції за допомогою невизначеного типу даних
// що дозволяє мові програмування підставити тип самостійно під час виклику

template<typename T>
double add(T a, T b, T c) { return a + b + c;}
// int int int, double double doubel, float float float

template<typename T, typename T2>
double add(T a, T2 b, T2 c) { return a + b + c; }
// int double double, double int int ...

template<typename T, typename T2>
double add(T a, T b, T2 c) { return a + b + c; }
// int int double, double double int ...

template<typename T, typename T2>
double add(T a, T2 b, T c) { return a + b + c;}
// int double int, double int double ...

int main()
{
    cout << add(1, 1, 1) << add(0.5,1.2,5.0);
    cout << add(1, 1.5, 1.0) << add(1.5, 1, 1);
    cout << add(1, 1.5, 1);
}
