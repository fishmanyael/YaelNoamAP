//
// Created by nsc on 12/31/18.
//

#ifndef APPNOAMYAEL_SMALLEROREQUALEXPRESSION_H
#define APPNOAMYAEL_SMALLEROREQUALEXPRESSION_H

#include "BinaryExpression.h"

class SmallerOrEqualExpression : public BinaryExpression {
public:
    SmallerOrEqualExpression(Expression *a, Expression *b);

    double calculate() override;;
};

#endif //APPNOAMYAEL_SMALLEROREQUALEXPRESSION_H