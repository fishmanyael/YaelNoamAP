//
// Created by yael on 31/12/2018.
//


#ifndef APP_PLUS_H
#define APP_PLUS_H


#include "BinaryExpression.h"

class Plus : public BinaryExpression {
public:
    Plus(Expression * a, Expression * b);
    double calculate();
};

#endif