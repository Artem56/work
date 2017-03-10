//
// Created by artem on 07.03.17.
//

/**
 * В данном случае нам необходимо переопределить все методы из-за возвращаемых значений.
 * Возможно будет лучше создать родительский класс Number от которого наследовать Complex, Real, Integer
 * Или можно чтоб указатель был Complex а объект Real, все методы будут использованы из класса Complex, а
 *    чтоб достать объект сделаем явное приведение типов
 */

#include "Complex.h"
#include "Real.h"


int main() {
    //Complex
    {
        Complex a(0, 0);
        //Complex b(2, 2);
        cin >> a;
        cout << a;
    }

    //Real
    {
        Real a(1);
        Real b(2);
        cin >> a;
        cout << a;
    }

    return 0;
}