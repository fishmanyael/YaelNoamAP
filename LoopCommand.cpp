//
// Created by yael on 21/12/2018.
//
#include "Interpreter.h"
#include "LoopCommand.h"

void LoopCommand::execute() {

}

LoopCommand::LoopCommand(ProgramData &p, vector<string>::iterator &it, map<string, Expression *> &commands)
        : ConditionCommand(p, it, commands) {}
