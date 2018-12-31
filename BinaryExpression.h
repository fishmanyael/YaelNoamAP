//
// Created by nsc on 12/31/18.
//

#ifndef APPNOAMYAEL_BINARYEXPRESSION_H
#define APPNOAMYAEL_BINARYEXPRESSION_H

#include "Expression.h"

class BinaryExpression : public Expression {
protected:
    Expression *_right;
    Expression * _left;

    BinaryExpression(Expression * a, Expression * b) {
        _right = a;
        _left = b;
    }
};

#endif //APPNOAMYAEL_BINARYEXPRESSION_H
