//
// Created by yael on 26/12/2018.
//

#include "ConditionCommand.h"

ConditionCommand::ConditionCommand(ProgramData &p, vector<string>::iterator &it, map<string, Expression *> &commands)
        : AbstractCommand(p, it) {
    this->commands = commands;
}


bool ConditionCommand::check() {
    return (bool) exp->getValue();
}

void ConditionCommand::run() {
    it = start;
    while (getWord() != "}") {
        if (commands.count(*it)) {
            Expression &c = *commands[*it];
            c.calculate();
        } else {
            Expression &c = *commands["var"];
            c.calculate();
        }
    }
}

void ConditionCommand::gotoEnd() {
    if (*it != "}") {
        int numOfOpen = 1;
        while (numOfOpen) {
            string word = goToNextWord();
            if (word == "{") {
                numOfOpen++;
            }
            if (word == "}") {
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
    goToNextWord();
    exp = &(ExpressionHandler::getTillEndOfLine(it, programData));
    start = it;
}