//
// Created by artem on 07.03.17.
//

#ifndef NUMBER_COMPLEX_H
#define NUMBER_COMPLEX_H

#include <iostream>
using namespace std;



class Complex {
private:
    double real;
    double im;

public:
    Complex();
    Complex(double);
    Complex(double, double);
    Complex(const Complex& other);

    double abs();
    double getReal() const ;
    double getIm() const ;
    void setReal(double real) ;
    void setIm(double im);

    Complex operator+=(const Complex &a);
    Complex operator+(const Complex &a);
    Complex operator-=(const Complex &a);
    Complex operator-(const Complex &a);
    Complex operator=(const Complex &a);
    Complex operator*=(const Complex a);
    Complex operator*(const Complex &a);
    Complex operator--();
    Complex operator--(int a);
    Complex operator++(int a);
    Complex operator/(const Complex &a);

    friend ostream& operator<<(ostream& out, const Complex& a);
    friend istream& operator>>(istream& in, Complex& a);
};


#endif //NUMBER_COMPLEX_H
