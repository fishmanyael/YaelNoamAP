//
// Created by yael on 01/01/2019.
//

#include "SmallerOrEqualExpression.h"

SmallerOrEqualExpression::SmallerOrEqualExpression(Expression *a, Expression *b) : BinaryExpression(a, b) {}

double SmallerOrEqualExpression::calculate() { return _left->calculate() <= _right-> calculate(); }
