//
// Created by nsc on 1/2/19.
//

#include "SleepCommand.h"
#include <unistd.h>
#include "ExpressionHandler.h"

SleepCommand::SleepCommand(ProgramData &p, vector<string>::iterator it) :AbstractCommand(p,it){}

void SleepCommand::execute() {
    goToNextWord();
    ExpressionHandler& exp=ExpressionHandler::getTillEndOfLine(it,programData);
    double x=exp.getValue();
    usleep(x);
    delete &exp;
}
