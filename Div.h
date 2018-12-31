//
// Created by nsc on 12/31/18.
//

#ifndef APPNOAMYAEL_DIV_H
#define APPNOAMYAEL_DIV_H

#include "BinaryExpression.h"

class Div : public BinaryExpression {
    Div(Expression *a, Expression *b) : BinaryExpression(a, b) {}

    double calculate() override { return _left->calculate() / _right-> calculate(); };
};

#endif //APPNOAMYAEL_DIV_H
