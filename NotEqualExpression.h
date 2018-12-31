//
// Created by nsc on 12/31/18.
//

#ifndef APPNOAMYAEL_NOTEQUALEXPRESSION_H
#define APPNOAMYAEL_NOTEQUALEXPRESSION_H

#include "BinaryExpression.h"

class NotEqualExpression : public BinaryExpression {
    NotEqualExpression(Expression *a, Expression *b) : BinaryExpression(a, b) {}

    double calculate() override { return _left->calculate() != _right-> calculate(); };
};

#endif //APPNOAMYAEL_NOTEQUALEXPRESSION_H
