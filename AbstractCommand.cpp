//
// Created by yael on 26/12/2018.
//

#include "AbstractCommand.h"

AbstractCommand::AbstractCommand(ProgramData &p, vector<string>::iterator &it) : programData(p), it(it) {}

string AbstractCommand::goToNextWord() {
    return *(++it);
}

string &AbstractCommand::getWord() {
    return *it;;
}
