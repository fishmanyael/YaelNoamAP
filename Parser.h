
//
// Created by nsc on 12/31/18.
//

#ifndef APPNOAMYAEL_PARSER_H
#define APPNOAMYAEL_PARSER_H

#include <map>
#include "CommandExpression.h"

using namespace std;


class Parser {

    map<string, CommandExpression *> commands;

public:
    Parser();

    CommandExpression getCommands;


};


#endif //APPNOAMYAEL_PARSER_H