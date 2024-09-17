// Lab_02.cpp
// <Євтюхін Олександр>
// Лаболаторна робота № 2.
// Лінійні проограми.
// Варіант 9

#include <iostream> // бібліотека консолі
#include <cmath>    // матиматична бібліотека

using namespace std; // стандартні імена

int main() // початок програми
{
	double b;   // вхідний параметр 2
	double a;   // вхідний параметр 1
	double z1;  // результат 1
	double z2;  // результат 2

	cout << "a = "; cin >> a; // запит числа a
	cout << "b = "; cin >> b; // запит числа b

	z1 = ((cos(a) - cos(b)) * (cos(a) - cos(b))) - ((sin(a) - sin(b)) * (sin(b) - sin(b)));
	z2 = -4 * sin((a - b) / 2) * sin((a - b) / 2) * cos(a + b);

	cout << endl;
	cout << "z1 = " << z1 << endl; // результат 1
	// cout << "z2 = " << z2 << endl; // результат 2

	cin.get(); // веденя символів перед закінченням
	return 0;  // кінець
}