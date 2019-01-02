//
// Created by yael on 01/01/2019.
//

#include "EqualExpression.h"

EqualExpression::EqualExpression(Expression *a, Expression *b) : BinaryExpression(a, b) {}

double EqualExpression::calculate() { return _left->calculate() == _right-> calculate(); }
