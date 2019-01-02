//
// Created by nsc on 1/2/19.
//

#ifndef APPNOAMYAEL_OPENDATASERVERCOMMAND_H
#define APPNOAMYAEL_OPENDATASERVERCOMMAND_H

#include "AbstractCommand.h"

class OpenDataServerCommand : public AbstractCommand{

public:
    OpenDataServerCommand(ProgramData& p, vector<string>::iterator& it);
    void execute(){

    }

};


#endif //APPNOAMYAEL_OPENDATASERVERCOMMAND_H
