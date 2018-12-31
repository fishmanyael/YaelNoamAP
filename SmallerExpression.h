//
// Created by nsc on 12/31/18.
//

#ifndef APPNOAMYAEL_SMALLEREXPRESSION_H
#define APPNOAMYAEL_SMALLEREXPRESSION_H

#include "BinaryExpression.h"

class SmallerExpression : public BinaryExpression {
    SmallerExpression(Expression *a, Expression *b) : BinaryExpression(a, b) {}

    double calculate() override { return _left->calculate() < _right-> calculate(); };
};

#endif //APPNOAMYAEL_SMALLEREXPRESSION_H
