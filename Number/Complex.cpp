/*
 * добавить сеттеры и геттеры, изменить приватность real и im
 */

#include "Complex.h"


Complex ::Complex(){
    real = 0;
    im = 0;
}

Complex ::Complex(double a){
    real = a;
    im = 0;
}

Complex ::Complex(double a, double b){
    real = a;
    im = b;
}

Complex::Complex(const Complex& a) {
    real = a.real;
    im = a.im;
}

double Complex :: abs(){
    return im*im + real*real;
}

double Complex::getReal() const {
    return real;
}

double Complex::getIm() const {
    return im;
}

void Complex::setReal(double real) {
    Complex::real = real;
}

void Complex::setIm(double im) {
    Complex::im = im;
}

Complex Complex::operator+=(const Complex& a){
    im += a.getIm();
    real += a.getReal();
    return Complex(real, im);
}

Complex Complex::operator+(const Complex& a){
    return Complex(real + a.getReal(), im + a.getIm());
}


Complex Complex::operator-=(const Complex& a){
    im -= a.getIm();
    real -= a.getReal();
    return Complex(real, im);
}

Complex Complex::operator-(const Complex& a){
    return *(new Complex(real - a.getReal(), im - a.getIm()));
}

Complex Complex::operator=(const Complex& a) {
    real = a.getReal();
    im = a.getIm();
    return Complex (real, im);
}

Complex Complex::operator*=(const Complex a){
    im = a.getIm() * real + a.getReal() * im;
    real = a.getReal() * real - a.getIm() * im;
    return Complex(real, im);
}

Complex Complex::operator*(const Complex& a){
    return Complex(a.getReal() * real - a.getIm() * im, a.getIm() * real + a.getReal() * im);
}

Complex Complex::operator--(){   //--x  комплексно сопряженное
    return Complex(real, -im);
}

Complex Complex::operator--(int a){
    return Complex(--real, --im);
}

Complex Complex::operator++(int a){
    return Complex(++real, ++im);
}

Complex Complex::operator/(const Complex& a){
    return Complex((a.getReal() * real - a.getIm() * im) / (a.getReal() * a.getReal() - a.getIm() * a.getIm()),
                   (a.getIm() * real + a.getReal() * im) / (a.getReal() * a.getReal() - a.getIm() * a.getIm()));
}

ostream& operator<<(ostream& out, const Complex& a) {
    if(a.getIm() == 0){
        out << a.getReal() << endl;
    }else if(a.getReal() == 0){
        out << a.getIm() << "*i" << endl;
    }else if(a.getIm() > 0) {
        out << a.getReal() << " + i*" << a.getIm() << endl;
    }else if(a.getIm() < 0){
        out << a.getReal() << " - i*" << -a.getIm() << endl;
    }
    return out;
}

istream& operator>>(istream& is, Complex& a) {
    char* endptr;

    char real[20];
    char im[20];

    cout<<"введите действительную часть комплексного числа\n";
    is>>real;
    double tmp1 = strtol(real, &endptr, 10);
    if(*endptr != '\0'){
        cout << "введен неверный символ: " << *endptr << endl;
        exit(1);
    }

    cout<<"введите мнимую часть действительного числа\n";
    is>>im;
    double tmp2 = strtol(im, &endptr, 10);
    if(*endptr != '\0'){
        cout << "введен неверный символ: " << *endptr << endl;
        exit(1);
    }

    a.setReal(tmp1);
    a.setIm(tmp2);
    return is;
}


