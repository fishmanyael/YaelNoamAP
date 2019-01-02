//
// Created by yael on 31/12/2018.
//

#include "ExpressionHandler.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Expression.h"
#include "Plus.h"
#include "Number.h"
#include "SmallerExpression.h"
#include "SmallerOrEqualExpression.h"
#include "Mul.h"
#include "Div.h"
#include "Expression.h"
#include "NotEqualExpression.h"
#include "Minus.h"
#include "EqualExpression.h"
#include "BiggerExpression.h"
#include "BiggerOrEqualExpression.h"
#include <stack>
#include <queue>
#include <cstring>
#include <map>
#define FIRST_PRECEDENCE 100
#define SECOND_PRECEDENCE 200
#define LAST_PRECEDENCE 0
#define LEFT_BRACKET_PRECEDENCE -1

class Minus;

void ExpressionHandler::shuntingYard(vector<string> &input) {
    stack<string> operators;
    vector<string>::iterator it;
    for (it = input.begin(); it != input.end(); it++) {
        if (isOperator(*it)) {
            while (!operators.empty() && hasGreaterPrecedence(operators.top(), *it)) {
                string &op = operators.top();
                expressionQ.push(op);
                operators.pop();
            }
            operators.push(*it);
        } else if (*it == "(") {
            operators.push(*it);
        } else if (*it == ")") {
            while (operators.top() != "(") {
                string &op = operators.top();
                expressionQ.push(op);
                operators.pop();
            }
            operators.pop();
        } else {
            expressionQ.push(*it);
        }
    }
}

bool ExpressionHandler::isOperator(string &s) {
    return (bool) precedence.count(s);
}

ExpressionHandler::ExpressionHandler(vector<string> &expressionVector, ProgramData &p) : p(p) {
    precedence["+"] = SECOND_PRECEDENCE;
    precedence["-"] = SECOND_PRECEDENCE;
    precedence["*"] = FIRST_PRECEDENCE;
    precedence["/"] = FIRST_PRECEDENCE;
    precedence["<="] = LAST_PRECEDENCE;
    precedence["=="] = LAST_PRECEDENCE;
    precedence[">="] = LAST_PRECEDENCE;
    precedence["!="] = LAST_PRECEDENCE;
    precedence["<"] = LAST_PRECEDENCE;
    precedence[">"] = LAST_PRECEDENCE;
    precedence["("] = LEFT_BRACKET_PRECEDENCE;
    shuntingYard(expressionVector);
}

bool ExpressionHandler::hasGreaterPrecedence(string &a, string &b) {
    if (a == "(") {
        return false;
    }
    return precedence[a] >= precedence[b];
}

Expression *ExpressionHandler::readQ() {
    stack<Expression *> expStack;
    queue<string> expQ = expressionQ;
    while (!expQ.empty()) {
        string &s = expQ.front();
        if (isOperator(s)) {
            Expression *right = expStack.top();
            expStack.pop();
            Expression *left = expStack.top();
            expStack.pop();
            expStack.push(createExpression(s, left, right));
        } else {
            expStack.push(createExpression(s, nullptr, nullptr));
        }
    }
}

Expression *ExpressionHandler::createExpression(string exstr, Expression *left, Expression *right) {
    if (left != nullptr) {
        switch (exstr[0]) {
            case '+':
                return new Plus(left, right);
            case '-':
                return new Minus(left, right);
            case '/':
                return new Div(left, right);
            case '*':
                return new Mul(left, right);
            case '=':
                return new EqualExpression(left, right);
            case '>':
                if (exstr == ">=")
                    return new BiggerOrEqualExpression(left, right);
                return new BiggerExpression(left, right);
            case '!':
                return new NotEqualExpression(left, right);
            case '<':
                if (exstr == "<=")
                    return new SmallerOrEqualExpression(left, right);
                return new SmallerExpression(left, right);
        }
    }
    if (p.containsKey(exstr)) {
        return new Number(p.getVar(exstr));
    }
    return new Number(stod(exstr));
}

double ExpressionHandler::getValue() {
    return readQ()->calculate();
}

ExpressionHandler &ExpressionHandler::getTillEndOfLine(vector<string>::iterator &it, ProgramData &p) {
    vector<string> &v = *new vector<string>();
    while (*it != "\n" && *it != "{") {
        v.push_back(*it);
        it++;
    }
    while (*it == "\n" || *it == "{") {
        it++;
    }
    return *new ExpressionHandler(v, p);
}