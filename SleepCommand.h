//
// Created by nsc on 1/2/19.
//

#ifndef APPNOAMYAEL_SLEEPCOMMAND_H
#define APPNOAMYAEL_SLEEPCOMMAND_H

#include "AbstractCommand.h"
#include "ProgramData.h"
class SleepCommand : public AbstractCommand{
public:
   SleepCommand(ProgramData& p,vector<string>::iterator it);

   void execute();
};


#endif //APPNOAMYAEL_SLEEPCOMMAND_H
