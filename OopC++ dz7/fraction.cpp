#include "Header.h"
#include "fraction.h"

Fraction::Fraction()
{
	numerator = 0;
	denominator = 1;
}

Fraction::Fraction(int numerator, int denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
}

Fraction::Fraction(const Fraction& other)
{
	numerator = other.numerator;
	denominator = other.denominator;
}

void Fraction::setNumerator(int numerator)
{
	this->numerator = numerator;
}

void Fraction::setDenominator(int denominator)
{
	this->denominator = denominator;
}

int Fraction::getNumerator()
{
	return numerator;
}

int Fraction::getDenominator()
{
	return denominator;
}

void Fraction::print()
{
	cout << numerator << "/" << denominator << endl;
}

void Fraction::printAsDouble()
{
	cout << (double)numerator / denominator << endl;
}

void Fraction::input()
{
	cout << "Enter numerator: ";
	cin >> numerator;
	cout << "Enter denominator: ";
	cin >> denominator;
}

Fraction& Fraction::operator=(const Fraction& other)
{
	numerator = other.numerator;
	denominator = other.denominator;
	return *this;
}

Fraction Fraction::operator+(const Fraction& other)
{
	Fraction result;
	result.numerator = numerator * other.denominator + other.numerator * denominator;
	result.denominator = denominator * other.denominator;
	return result;
}

Fraction Fraction::operator-(const Fraction& other)
{
	Fraction result;
	result.numerator = numerator * other.denominator - other.numerator * denominator;
	result.denominator = denominator * other.denominator;
	return result;
}

Fraction Fraction::operator*(const Fraction& other)
{
	Fraction result;
	result.numerator = numerator * other.numerator;
	result.denominator = denominator * other.denominator;
	return result;
}

Fraction Fraction::operator/(const Fraction& other)
{
	Fraction result;
	result.numerator = numerator * other.denominator;
	result.denominator = denominator * other.numerator;
	return result;
}

ostream& operator<<(ostream& out, const Fraction& other)
{
	out << other.numerator << "/" << other.denominator;
	return out;
}

istream& operator>>(istream& in, Fraction& other)
{
	in >> other.numerator >> other.denominator;
	return in;
}