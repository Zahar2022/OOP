#pragma once
#include <iostream>
#include <cstdlib>
#include <stdexcept>


class Fraction {

    int numerator;
    int denominator;

public:
    Fraction(int numerator = 1, int denominator = 1) {    // constructor with parameters
        setNumerator(numerator);
        setDenominator(denominator);  
    };

    int getNumerator() {  //getter 1 for numerator
        return this -> numerator;
    }

    int getDenominator() {  //getter 2 for denominator
        return this -> denominator;
    }

    void setNumerator(int numerator) {  //setter 1 for numerator
        this -> numerator = numerator;

    }

    void setDenominator(int denominator) {   //setter for denominator
        this -> denominator = denominator;
    }


    Fraction InputFraction() const;
    void OutputFraction() const;
    Fraction operator + (Fraction b);
    Fraction operator - (Fraction b);
    Fraction operator * (Fraction b);
    Fraction operator / (Fraction b);
    bool operator < (Fraction b);
    bool operator > (Fraction b);
    bool operator == (Fraction b);
    bool operator != (Fraction b);
    int gcd();
    void Reduce();
    float ConvertFraction() const;
    Fraction operator ^ (int power);


};