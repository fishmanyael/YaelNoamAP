//
// Created by yael on 02/01/2019.
//

#ifndef PROJET_SETCOMMAND_H
#define PROJET_SETCOMMAND_H

#include "AbstractCommand.h"

class SetCommand final: public AbstractCommand{
public:
    SetCommand(ProgramData& p,vector<string>::iterator& it);

    void execute();
};


#endif //PROJET_SETCOMMAND_H
