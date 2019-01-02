//
// Created by yael on 26/12/2018.
//

#include "SleepCommand.h"

void SleepCommand::execute() {
    int howManySleep;
    string word=goToNextWord();
    if ('0'<=word[0] && word[0]<='9'){
        howManySleep=stoi(word);
    } else{
        howManySleep=(int)programData.getVar(word);
    }
}

SleepCommand::SleepCommand(ProgramData &p, vector<string>::iterator &it) : AbstractCommand(p, it) {

}
