#include "Header.h"
#include "fraction.h"

int main()
{
	setlocale(0, "");
	Fraction f1, f2, f3;
	cout << "Enter first fraction: ";
	f1.input();
	cout << "Enter second fraction: ";
	f2.input();
	cout << "+: ";
	f3 = f1 + f2;
	f3.print();
	cout << "-: ";
	f3 = f1 - f2;
	f3.print();
	cout << "*: ";
	f3 = f1 * f2;
	f3.print();
	cout << "/: ";
	f3 = f1 / f2;
	f3.print();
	cout << "First fraction: ";
	f1.print();
	cout << "Second fraction: ";
	f2.print();
	cout << "Third fraction: ";
	f3.print();
	cout << "First fraction as double: ";
	f1.printAsDouble();
	cout << "Second fraction as double: ";
	f2.printAsDouble();
	cout << "Third fraction as double: ";
	f3.printAsDouble();
}