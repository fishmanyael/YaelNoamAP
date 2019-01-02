//
// Created by yael on 02/01/2019.
//

#include "SetCommand.h"
#include "ExpressionHandler.h"
SetCommand::SetCommand(ProgramData &p, vector<string>::iterator &it) :AbstractCommand(p,it){

}

void SetCommand::execute() {
    string &var= getWord();
    //go over =
    goToNextWord();
    //go to the expression
    goToNextWord();
    ExpressionHandler& exp=ExpressionHandler::getTillEndOfLine(it,programData);
    double d=exp.getValue();
    programData.setVar(var, d);
}
