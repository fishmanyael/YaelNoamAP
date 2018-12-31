//
// Created by nsc on 12/31/18.
//

#include "CommandExpression.h"

double CommandExpression::calculate(vector <string> &arguments, int index) {
    return _command->doCommand(arguments, index);
}
