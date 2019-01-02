//
// Created by yael on 17/12/2018.
//

#ifndef PROJET_DOCOMMAND_H
#define PROJET_DOCOMMAND_H

#include <string>
#include <vector>

using namespace std;
class Command{
public:
    virtual void execute() =0;
};



#endif //PROJET_DOCOMMAND_H
