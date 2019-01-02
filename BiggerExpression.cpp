//
// Created by yael on 01/01/2019.
//

#include "BiggerExpression.h"

BiggerExpression::BiggerExpression(Expression *a, Expression *b) : BinaryExpression(a, b) {}

double BiggerExpression::calculate() { return _left->calculate() > _right-> calculate(); }
