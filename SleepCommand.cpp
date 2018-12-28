//
// Created by yael on 26/12/2018.
//

#include "SleepCommand.h"
//#include <unistd.h>

void SleepCommand::doCommand() {
    int howManySleep;
    string word=goToNextWord();
    if ('0'<=word[0] && word[0]<='9'){
        howManySleep=stoi(word);
    } else{
        howManySleep=(int)programData.getVar(word);
    }
}
