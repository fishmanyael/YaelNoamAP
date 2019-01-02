//
// Created by yael on 17/12/2018.
//

#ifndef PROJET_CMDREADER_H
#define PROJET_CMDREADER_H


#include "string"
#include "Expression.h"
#include "Command.h"
#include "ProgramData.h"
#include <sstream>
#include <iostream>
#include <fstream>
#include <vector>
#include <map>

using namespace std;


class Interpreter {
    vector<string> lexerVector;
    vector<string>::iterator first;
    vector<string>::iterator end;
    ProgramData* programData;
    map<string, Expression *> commandMap;
public:
    Interpreter(istream infile) {
        lexerVector=lexer(infile);
        programData=new ProgramData();
        end=lexerVector.end();

    }

    vector<string> &lexer(istream &infile);

    int parser(vector<string> &words);
};


#endif //PROJET_CMDREADER_H
