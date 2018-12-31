//
// Created by nsc on 12/31/18.
//

#ifndef APPNOAMYAEL_MUL_H
#define APPNOAMYAEL_MUL_H

#include "BinaryExpression.h"

class Mul : public BinaryExpression {
    Mul(Expression *a, Expression *b) : BinaryExpression(a, b) {}

    double calculate() override { return _left->calculate() * _right-> calculate(); };
};

#endif //APPNOAMYAEL_MUL_H
