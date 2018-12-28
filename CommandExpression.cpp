//
// Created by yael on 26/12/2018.
//

#include "CommandExpression.h"

CommandExpression::CommandExpression(Command &command) :c(command){
}

double CommandExpression::calculate() {
    c.execute();
    return 0;
}
