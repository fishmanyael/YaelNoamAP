//
// Created by nsc on 12/31/18.
//

#ifndef APPNOAMYAEL_EQUALEXPRESSION_H
#define APPNOAMYAEL_EQUALEXPRESSION_H

#include "BinaryExpression.h"

class EqualExpression : public BinaryExpression {
public:
    EqualExpression(Expression *a, Expression *b);

    double calculate() override;;
};

#endif //APPNOAMYAEL_EQUALEXPRESSION_H