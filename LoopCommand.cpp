//
// Created by yael on 21/12/2018.
//
#include "Interpreter.h"
#include "LoopCommand.h"



LoopCommand::LoopCommand(ProgramData &p, vector<string>::iterator &it, map<string, Expression *> &commands)
        : ConditionCommand(p, it, commands) {}

void LoopCommand::execute() {
    getCondition();
    while(check()){
        run();
    }
    gotoEnd();
}