//
// Created by nsc on 12/31/18.
//

#ifndef APPNOAMYAEL_NOTEQUALEXPRESSION_H
#define APPNOAMYAEL_NOTEQUALEXPRESSION_H

#include "BinaryExpression.h"

class NotEqualExpression : public BinaryExpression {
public:
    NotEqualExpression(Expression *a, Expression *b);

    double calculate() override;;
};

#endif //APPNOAMYAEL_NOTEQUALEXPRESSION_H