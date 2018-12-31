//
// Created by nsc on 12/31/18.
//

#ifndef APPNOAMYAEL_PLUS_H
#define APPNOAMYAEL_PLUS_H


#include "BinaryExpression.h"

class Plus : public BinaryExpression {
    Plus(Expression *a, Expression *b) : BinaryExpression(a, b) {}

    double calculate() override { return _left->calculate() + _right-> calculate(); };
};

#endif //APPNOAMYAEL_PLUS_H
