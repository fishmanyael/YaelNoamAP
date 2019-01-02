//
// Created by yael on 26/12/2018.
//

#ifndef PROJET_CONDITIONCOMMAND_H
#define PROJET_CONDITIONCOMMAND_H

#include "AbstractCommand.h"
#include "Expression.h"
#include "ExpressionHandler.h"
#include <map>

class ConditionCommand : AbstractCommand {
    map<string, Expression *> commands;
    vector<string> ::iterator start;
    ExpressionHandler* exp;
protected:
    ConditionCommand(ProgramData &p, vector<string>::iterator &it, map<string, Expression *>& commands);

    bool check();

    void run();

    void gotoEnd();

    void getCondition();
};


#endif //PROJET_CONDITIONCOMMAND_H