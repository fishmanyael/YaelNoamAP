//
// Created by nsc on 12/31/18.
//

#ifndef APPNOAMYAEL_INTERPRETER_H
#define APPNOAMYAEL_INTERPRETER_H

#include <map>
#include <vector>
#include "ProgramData.h"

using namespace std;

class Interpreter {

    //the data of the variables in the program
    ProgramData _data;

    //the bounded vars (each var can be bounded to more than one thing)
    map<string, vector<string>> _bindTable;

public:

    Interpreter();
    static vector<string> lexer(string line);



};


#endif //APPNOAMYAEL_INTERPRETER_H
