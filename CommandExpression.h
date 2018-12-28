//
// Created by yael on 26/12/2018.
//

#ifndef PROJET_COMMANDEXSPRESSION_H
#define PROJET_COMMANDEXSPRESSION_H

#include "Exspression.h"
#include "Command.h"
class CommandExpression : public Expression{
    Command &c;

public:
    CommandExpression(Command& command);

    double calculate() override;
};


#endif //PROJET_COMMANDEXSPRESSION_H
