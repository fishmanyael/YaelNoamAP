//
// Created by nsc on 12/31/18.
//

#ifndef APPNOAMYAEL_COMMANDEXPRESSION_H
#define APPNOAMYAEL_COMMANDEXPRESSION_H


#include <string>
#include <vector>
#include "Command.h"

using namespace std;

class CommandExpression {

    Command* _command{};

public:
    CommandExpression() = default;

    explicit CommandExpression(Command* command) {
        _command = command;
    }

    virtual double calculate(vector<string>& arguments, int index);

    ~CommandExpression() {
        delete _command;
    }
};


#endif //APPNOAMYAEL_COMMANDEXPRESSION_H
