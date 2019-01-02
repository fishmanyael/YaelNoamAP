//
// Created by nsc on 12/31/18.
//

#ifndef APPNOAMYAEL_MINUS_H
#define APPNOAMYAEL_MINUS_H

#include "BinaryExpression.h"

class Minus : public BinaryExpression {
public:
    Minus(Expression *a, Expression *b) : BinaryExpression(a, b) {}

    double calculate() override { return _left->calculate() - _right-> calculate(); };
};

#endif //APPNOAMYAEL_MINUS_H
