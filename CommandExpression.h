//
// Created by nsc on 12/31/18.
//

#ifndef APPNOAMYAEL_COMMANDEXPRESSION_H
#define APPNOAMYAEL_COMMANDEXPRESSION_H


#include <string>
#include <vector>
#include "Command.h"
#include "Expression.h"
using namespace std;

class CommandExpression: public Expression {

    Command* _command;

public:
    CommandExpression() = default;


    virtual double calculate();
};


#endif //APPNOAMYAEL_COMMANDEXPRESSION_H

