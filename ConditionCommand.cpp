//
// Created by yael on 26/12/2018.
//

#include "ConditionCommand.h"

ConditionCommand::ConditionCommand(ProgramData &p, vector<string>::iterator &it, map<string, Expression *> &commands)
        : AbstractCommand(p, it) {
    this->commands=commands;
}


bool ConditionCommand::check() {
    return (bool) exp->getValue();
}

void ConditionCommand::run() {
    it=start;
    while(getWord()!="}"){
        Expression* expression = commands[getWord()];
        if(expression != nullptr)
            expression->calculate();
        else
            commands["set"]->calculate();
    }
}

void ConditionCommand::gotoEnd() {
    if (*it!="}"){
        int numOfOpen=1;
        while (numOfOpen){
            string word=goToNextWord();
            if (word=="{"){
                numOfOpen++;
            }
            if (word=="}"){
                numOfOpen--;
            }
        }
    }
    //skip }
    goToNextWord();
    //skip \n
    goToNextWord();
    delete exp;
}

void ConditionCommand::getCondition() {
    exp=&(ExpressionHandler::getTillEndOfLine(it,programData));
}
