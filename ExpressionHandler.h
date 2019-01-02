//
// Created by yael on 31/12/2018.
//

#ifndef PROJET_EXPRESSIONHANDLER_H
#define PROJET_EXPRESSIONHANDLER_H
#define OPERATORS_NUM 10

#include <vector>
#include <string>
#include <queue>
#include <map>
#include "Expression.h"
#include "ProgramData.h"

using namespace std;

class ExpressionHandler {
    map<string, int> precedence;
    queue<string> expressionQ;
    ProgramData &p;

    bool isOperator(string &s);

    Expression *createExpression(string, Expression *left, Expression *right);

    bool hasGreaterPrecedence(string &a, string &b);

    void shuntingYard(vector<string> &input);

    Expression *readQ();

    ExpressionHandler(vector<string> &expressionVector, ProgramData &p);

public:
    double getValue();

    static ExpressionHandler &getTillEndOfLine(vector<string>::iterator &it, ProgramData &p);

};


#endif //PROJET_EXPRESSIONHANDLER_H
