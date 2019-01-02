//
// Created by nsc on 12/31/18.
//

#ifndef APPNOAMYAEL_COMMAND_H
#define APPNOAMYAEL_COMMAND_H


#include <vector>
#include <string>

using namespace std;

class Command {
protected:

public:
    virtual void execute() = 0;
};


#endif //APPNOAMYAEL_COMMAND_H
