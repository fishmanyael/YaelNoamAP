//
// Created by yael on 26/12/2018.
//

#ifndef PROJET_CONDITIONCOMMAND_H
#define PROJET_CONDITIONCOMMAND_H

#include "AbstractCommand.h"
#include "Exspression.h"
#include <map>

class ConditionCommand : AbstractCommand {
    map<string, Expression *> commands;
    vector<string> ::iterator start;
protected:
    ConditionCommand(ProgramData &p, vector<string>::iterator &it, map<string, Expression *>& commands)
            : AbstractCommand(p, it) {
        this->commands=commands;
    }

    bool check(){
        return true;
    }

    void run(){
        it=start;
        while(getWord()!="}"){
            Expression* expression = commands[getWord()];
            if(expression != nullptr)
                expression->calculate();
            else
                commands["set"]->calculate();
            goToNextWord();
        }
    }

    void gotoEnd(){
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
        goToNextWord();
    }
};


#endif //PROJET_CONDITIONCOMMAND_H
