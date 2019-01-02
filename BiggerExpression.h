//
// Created by nsc on 12/31/18.
//

#ifndef APPNOAMYAEL_BIGGEREXPRESSION_H
#define APPNOAMYAEL_BIGGEREXPRESSION_H

#include "BinaryExpression.h"

class BiggerExpression : public BinaryExpression {
public:
    BiggerExpression(Expression *a, Expression *b) : BinaryExpression(a, b) {}

    double calculate() override { return _left->calculate() > _right-> calculate(); };
};

#endif //APPNOAMYAEL_BIGGEREXPRESSION_H
