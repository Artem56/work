//
// Created by artem on 10.03.17.
//

#ifndef NUMBER_REAL_H
#define NUMBER_REAL_H


#include "Complex.h"

class Real : Complex {
public:
    Real();
    Real(double a);
    Real(const Real& other);

    Real operator--();

    friend ostream& operator<<(ostream& out, const Real& a);
    friend istream& operator>>(istream& in, Real& a);
};


#endif //NUMBER_REAL_H
