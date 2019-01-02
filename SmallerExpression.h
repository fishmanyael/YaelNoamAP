//
// Created by nsc on 12/31/18.
//

#ifndef APPNOAMYAEL_SMALLEREXPRESSION_H
#define APPNOAMYAEL_SMALLEREXPRESSION_H

#include "BinaryExpression.h"

class SmallerExpression : public BinaryExpression {
public:
    SmallerExpression(Expression *a, Expression *b);

    double calculate() override;;
};

#endif //APPNOAMYAEL_SMALLEREXPRESSION_H