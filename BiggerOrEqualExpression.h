//
// Created by nsc on 12/31/18.
//

#ifndef APPNOAMYAEL_BIGGEROREQUALEXPRESSION_H
#define APPNOAMYAEL_BIGGEROREQUALEXPRESSION_H

#include "BinaryExpression.h"

class BiggerOrEqualExpression : public BinaryExpression {
public:
    BiggerOrEqualExpression(Expression *a, Expression *b);

    double calculate() override;;
};

#endif //APPNOAMYAEL_BIGGEROREQUALEXPRESSION_H
