//
// Created by yael on 26/12/2018.
//

#ifndef PROJET_PRINTCOMMAND_H
#define PROJET_PRINTCOMMAND_H

#include "AbstractCommand.h"

class PrintCommand: public AbstractCommand {
    PrintCommand(ProgramData p, vector<string>::iterator it);

public:
    void execute();
};


#endif //PROJET_PRINTCOMMAND_H