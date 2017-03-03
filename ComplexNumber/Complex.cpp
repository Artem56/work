/*
 * добавить сеттеры и геттеры, изменить приватность real и im
 */

#include "Complex.h"

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
        cout << a.getReal() << endl;
    }else if(a.getReal() == 0){
        cout << a.getIm() << "*i" << endl;
    }else if(a.getIm() > 0) {
        cout << a.getReal() << " + i*" << a.getIm() << endl;
    }else if(a.getIm() < 0){
        cout << a.getReal() << " - i*" << -a.getIm() << endl;
    }
    return out;
}

istream& operator>>(istream& in, Complex& a) {
    double real;
    double im;
    in>>real;
    in>>im;
    a.setReal(real);
    a.setIm(im);
    return in;
}

int main() {
    Complex * number = new Complex(1, 1);

    //Complex * number2 = new Complex();
    //cin>>number2;

    cout<<number;

    return 0;
}