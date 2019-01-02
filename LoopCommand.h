//
// Created by yael on 21/12/2018.
//

#ifndef PROJET_LOOPCOMMAND_H
#define PROJET_LOOPCOMMAND_H


#include "ConditionCommand.h"

class LoopCommand final : public ConditionCommand {


public:
    LoopCommand(ProgramData &p, vector<string>::iterator &it, map<string, Expression *> &commands);

    virtual void execute();

};


#endif //PROJET_LOOPCOMMAND_H
