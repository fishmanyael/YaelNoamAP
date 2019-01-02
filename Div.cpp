#include "Div.h"
#include <iostream>

double Div::calculate() {
    double right=_right->calculate();
    if (right==0)
        throw "Div By Zero";
    return _left->calculate() /right;
}

Div::Div(Expression * a, Expression * b) : BinaryExpression(a, b){}
