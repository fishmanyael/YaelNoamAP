//
// Created by yael on 26/12/2018.
//

#include "EnterC.h"
#include <iostream>

void EnterC::doCommand() {
    char c;
    cin>>c;
    goToNextWord();
    goToNextWord();
}

EnterC::EnterC(ProgramData &p, vector<string>::iterator& it) : AbstractCommand(p, it) {}
