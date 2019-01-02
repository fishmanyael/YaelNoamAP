//
// Created by yael on 01/01/2019.
//

#include "SmallerExpression.h"

SmallerExpression::SmallerExpression(Expression *a, Expression *b) : BinaryExpression(a, b) {}

double SmallerExpression::calculate() { return _left->calculate() < _right->calculate(); }
