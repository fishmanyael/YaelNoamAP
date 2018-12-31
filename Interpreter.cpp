//
// Created by yael on 17/12/2018.
//

#include "Interpreter.h"

vector<string> &Interpreter::lexer(istream &infile) {
    vector<string> &v = *new vector<string>();
    string line;
    while (getline(infile,line)) {
        stringstream linestream(line);
        string word;
        while(linestream>>word){
            if (word[0]=='('){
                v.emplace_back("(");
                word=word.substr(1);
            }
            if (word[word.size()-1]=')'){
                v.push_back(word.substr(0,-1));
                word=")";
            }
            v.push_back(word);
        }
        v.emplace_back("\n");
    }
    return v;
}

int Interpreter::parser(vector<string> &words) {
    vector<string>::iterator it;
    for (it = words.begin(); it != words.end(); it++) {
        if (commandMap.count(*it)) {
            Expression &c = *commandMap[*it];
            c.calculate();
            break;
        }
    }
    return 0;
}
