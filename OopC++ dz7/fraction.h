#pragma once
#include "Header.h"


class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction();
	Fraction(int numerator, int denominator);
	Fraction(const Fraction& other);
	void setNumerator(int numerator);
	void setDenominator(int denominator);
	int getNumerator();
	int getDenominator();
	void print();
	void printAsDouble(); // �������� ��� � ������ ������� �����
	void input();
	Fraction& operator=(const Fraction& other);
	Fraction operator+(const Fraction& other);
	Fraction operator-(const Fraction& other);
	Fraction operator*(const Fraction& other);
	Fraction operator/(const Fraction& other);
	friend ostream& operator<<(ostream& out, const Fraction& other); // �������������� ��������� ������
	friend istream& operator>>(istream& in, Fraction& other); // �������������� ��������� �����
};