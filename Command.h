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
    int _argumentsAmount;

public:
    virtual int doCommand(vector<string>& arguments, int index) = 0;
};


#endif //APPNOAMYAEL_COMMAND_H
