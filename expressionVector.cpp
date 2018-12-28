//
// Created by yael on 27/12/2018.
//

#include "expressionVector.h"


Expression *getExpression(ProgramData &p, vector<string>::iterator &it){
    vector<string> v;
    while (*it!="}"&& *it!="endl"){
        if (p.containsKey(*it)){
            v.push_back(to_string(p.getVar(*it)));
        } else {
            v.push_back(*it);
        }
        it++;
    }
    return shuntingYard(v);
}
