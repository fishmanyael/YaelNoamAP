//
// Created by yael on 01/01/2019.
//

#include "NotEqualExpression.h"

NotEqualExpression::NotEqualExpression(Expression *a, Expression *b) : BinaryExpression(a, b) {}

double NotEqualExpression::calculate() { return _left->calculate() != _right-> calculate(); }
