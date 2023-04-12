
#include <iostream>
using namespace std;
double D(double a, double b, double c);
void rx(double a, double b, double c);



int main()
{
	int a = 2.0, b = 5.0, c = -7.0;
	rx(a, b, c);
}



double D(double a, double b, double c) {
	return b * b - 4 * a * c;
}



void rx(double a, double b, double c) {
	double d = D(a, b, c);
	if (d == 0) { cout << a / (2 * a); }
	else if (d > 0) {
		cout << (-b + pow(d, 0.5)) / (2 * a) << '\n';
		cout << (-b - pow(d, 0.5)) / (2 * a);
	}
	else if (d < 0) { cout << "Nemaye rozvazkiv"; }
}