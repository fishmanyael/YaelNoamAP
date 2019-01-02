//
// Created by yael on 01/01/2019.
//

#include "BiggerOrEqualExpression.h"

BiggerOrEqualExpression::BiggerOrEqualExpression(Expression *a, Expression *b) : BinaryExpression(a, b) {}

double BiggerOrEqualExpression::calculate() { return _left->calculate() >= _right-> calculate(); }
