//
// Created by yael on 27/12/2018.
//

#ifndef PROJET_IFCOMMAND_H
#define PROJET_IFCOMMAND_H

#include "ConditionCommand.h"

class IfCommand : public ConditionCommand {

public:

    IfCommand(ProgramData &p, vector<string>::iterator &it, map<string, Expression *> &commands) :
            ConditionCommand(p, it, commands) {
    }


    virtual void execute();
};


#endif //PROJET_IFCOMMAND_H