#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Expression.h"
#include "Plus.h"
#include "Number.h"
#include "Mul.h"
#include "Div.h"
#include "Expression.h"
#include <stack>
#include <queue>
#include <cstring>
#include <map>


using namespace std;

bool isInteger(string s);

bool isOperator(string &s);


queue<string> shuntingYard(vector<string> input);

bool hasGreaterPrecedence(string &a, string &b);


int main(int argc, char *argv[]) {
    Expression *e;
    e = new Plus(new Number(3), new Mul(new Div(new Number(4), new Number(2)), new Number(5)));
    cout << e->calculate() << endl;
}



queue<string> shuntingYard(vector<string> input) {
    stack<string> operators;
    queue<string> output;
    vector<string>::iterator it;
    for (it = input.begin(); it != input.end(); it++) {
        if (isOperator(*it)) {
            while (!operators.empty() && hasGreaterPrecedence(operators.top(), *it)) {
                string &op = operators.top();
                output.push(op);
                operators.pop();
            }
            operators.push(*it);
        } else if (*it == "(") {
            operators.push(*it);
        } else if (*it == ")") {
            while (operators.top() != "(") {
                string &op = operators.top();
                output.push(op);
                operators.pop();
            }
            operators.pop();
        } else {
            output.push(*it);
        }
    }
    return output;
}

//returns true if a operator has greater precedence from b operator
bool hasGreaterPrecedence(string &a, string &b) {
    map<string, int> precedence;
    precedence["+"] = 100;
    precedence["-"] = 100;
    precedence["*"] = 200;
    precedence["/"] = 200;
    return precedence[a] > precedence[b];
}

bool isInteger(string s) {
    try {
        stod(s);
        return true;
    }
    catch (...) {
        return false;
    }
}

bool isOperator(string &s) {
    string operators[] = {"+", "-", "*", "/", "<", ">", "<=", ">=", "==", "!="};
    for (int i = 0; i < 10; i++)
        if (s == operators[i])
            return true;
    return false;
}