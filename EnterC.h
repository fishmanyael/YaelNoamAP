//
// Created by yael on 26/12/2018.
//

#ifndef PROJET_ENTERC_H
#define PROJET_ENTERC_H

#include "AbstractCommand.h"
class EnterC :AbstractCommand{
public:
    EnterC(ProgramData &p, vector<string>::iterator& it);
    void doCommand();
};


#endif //PROJET_ENTERC_H
