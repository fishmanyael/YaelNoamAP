//
// Created by yael on 26/12/2018.
//

#ifndef PROJET_SLEEPCOMMAND_H
#define PROJET_SLEEPCOMMAND_H

#include "AbstractCommand.h"

class SleepCommand : public AbstractCommand {
public:
    SleepCommand(ProgramData &p, vector<string>::iterator &it) : AbstractCommand(p, it) {

    }

    void doCommand();
};


#endif //PROJET_SLEEPCOMMAND_H
