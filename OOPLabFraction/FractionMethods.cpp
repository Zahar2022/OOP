
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <stdexcept>
#include "Fraction.h"


Fraction Fraction::InputFraction() const {
	Fraction c;
	std::cin >> c.numerator;
	std::cout << "/\n";
	std::cin >> c.denominator;
	if (denominator == 0) {
		std::cerr << "\nОшибка: введенный знаменатель равен 0 => меняем на 1\n";
		c.denominator = 1;
	}
	return c;
}


void Fraction::OutputFraction() const {
	std::cout << this->numerator << '/' << this->denominator << "\n";
}


int Fraction::gcd() { // наибольший общий делитель
	int result = std::min(abs(this->denominator), abs(this->numerator));
	while (result > 0) {
		if (this->numerator % result == 0 && this->denominator % result == 0) {
			break;
		}
		result--;
	}
	return result;
}


void Fraction::Reduce() {
	if (numerator == 0) {
		denominator = 0;
		return;
	}
	if (denominator == 0) {
		std::cerr << "\nОшибка: введенный знаменатель равен 0 => меняем на 1\n";
		denominator = 1;
	}
	Fraction c;
	int gcd = this->gcd();
	this->setDenominator(denominator / gcd);
	this->setNumerator(numerator / gcd);
	if (this->getDenominator() < 0) {
		denominator = denominator * -1;
		numerator = numerator * -1;
	}
}


Fraction Fraction::operator+(const Fraction b) {
	Fraction c;
	c.setDenominator(this->denominator * b.denominator);
	c.setNumerator(this->numerator * b.denominator + this->denominator * b.numerator);
	c.Reduce();
	return c;
}


Fraction Fraction::operator-(const Fraction b) {
	Fraction c;
	c.setDenominator(this->denominator * b.denominator);
	c.setNumerator(this->numerator * b.denominator - this->denominator * b.numerator);
	c.Reduce();
	return c;
}


Fraction Fraction::operator*(const Fraction b) {
	Fraction c;
	c.setDenominator(this->denominator * b.denominator);
	c.setNumerator(this->numerator * b.numerator);
	c.Reduce();
	return c;
}


Fraction Fraction::operator/(const Fraction b) {
	Fraction c;
	c.setDenominator(this->denominator * b.numerator);
	c.setNumerator(this->numerator * b.denominator);
	c.Reduce();
	return c;
}


bool Fraction::operator<(const Fraction b) {
	return (this->numerator * b.denominator < this->denominator* b.numerator);
}


bool Fraction::operator>(const Fraction b) {
	return (this->numerator * b.denominator > this->denominator * b.numerator);
}


bool Fraction::operator==(const Fraction b) {
	return (this->numerator * b.denominator == this->denominator * b.numerator);
}

bool Fraction ::operator!=(const Fraction b) {
	return (this->numerator * b.denominator != this->denominator * b.numerator);
}


float Fraction::ConvertFraction() const {
	return (float(this->numerator) / float(this->denominator));
}


Fraction Fraction::operator^(int power) {
	Fraction c;
	if (power == 0) {
		return c;
	}
	if (power < 0) {
		c.setNumerator(std::pow(this->denominator, power * -1));
		c.setDenominator(std::pow(this->numerator, power * -1));
		c.Reduce();
		return c;
	}
	else {
		c.setNumerator(std::pow(this->numerator, power));
		c.setDenominator(std::pow(this->denominator, power));
		c.Reduce();
		return c;
	}
}