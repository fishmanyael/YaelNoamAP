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
            v.push_back(word);
        }
        v.emplace_back("endl");
    }
    return v;
}

int Interpreter::parser(vector<string> &words) {
    vector<string>::iterator it;
    for (it = words.begin(); it != words.end(); it++) {
        if (commands.count(*it)) {
            Command &c = commands[*it];
            words.erase(it);
            c.execute();
            break;
        }
    }
    return 0;
}
