//
// Created by nsc on 12/31/18.
//

#ifndef APPNOAMYAEL_SMALLEROREQUALEXPRESSION_H
#define APPNOAMYAEL_SMALLEROREQUALEXPRESSION_H

#include "BinaryExpression.h"

class SmallerOrEqualExpression : public BinaryExpression {
public:
    SmallerOrEqualExpression(Expression *a, Expression *b) : BinaryExpression(a, b) {}

    double calculate() override { return _left->calculate() <= _right-> calculate(); };
};

#endif //APPNOAMYAEL_SMALLEROREQUALEXPRESSION_H
