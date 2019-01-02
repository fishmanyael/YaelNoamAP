//
// Created by yael on 26/12/2018.
//

#ifndef PROJET_ABSTRACTCOMMAND_H
#define PROJET_ABSTRACTCOMMAND_H

#include "Command.h"
#include "ProgramData.h"

class AbstractCommand : public Command {
protected:
    ProgramData &programData;
    vector<string>::iterator &it;

    AbstractCommand(ProgramData &p, vector<string>::iterator &it);

    string goToNextWord();

    string &getWord();

};


#endif //PROJET_ABSTRACTCOMMAND_H