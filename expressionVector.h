//
// Created by yael on 27/12/2018.
//

#ifndef PROJET_EXPRESSIONVECTOR_H
#define PROJET_EXPRESSIONVECTOR_H

#include <vector>
#include <string>
#include "Exspression.h"
#include "ProgramData.h"
using namespace std;
Expression * shuntingYard(vector<string> input);
Expression* getExpression(ProgramData& p, vector<string>::iterator& it);
#endif //PROJET_EXPRESSIONVECTOR_H

