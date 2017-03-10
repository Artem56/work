//
// Created by artem on 10.03.17.
//

#include "Real.h"

Real :: Real(){
     setReal(0);
}

Real :: Real(double a){
    setReal(a);
}

Real::Real(const Real& a) {
    setReal(a.getReal());
}

ostream& operator<<(ostream& out, const Real& a){
    out<<a.getReal();
    return out;
}

istream& operator>>(istream& in, Real& a){
    char* endptr;
    char real[20];

    cout<<"введите действительное число\n";
    in>>real;
    double tmp = strtol(real, &endptr, 10);
    if(*endptr != '\0'){
        cout << "введен неверный символ: " << *endptr << endl;
        exit(1);
    }

    a.setReal(tmp);
    return in;
}

Real Real::operator--(){   //--x  не бывает комплексно сопряженных
    return Real(0);
}
