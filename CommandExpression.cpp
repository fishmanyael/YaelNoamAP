//
// Created by nsc on 12/31/18.
//

#include "CommandExpression.h"

double CommandExpression::calculate() {
    _command->execute();
    return 0;
}
