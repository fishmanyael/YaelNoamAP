//
// Created by nsc on 12/31/18.
//

#ifndef APPNOAMYAEL_PROGRAMDATA_H
#define APPNOAMYAEL_PROGRAMDATA_H


#include <string>
#include <vector>
#include <map>
#include <mutex>

using namespace std;

class ProgramData {

    map<string, double> symbol_table;
    map<string, vector<string>> _bindTable;
    mutex locker;

public:

    bool containsKey(string& key){
        return (bool)(symbol_table.count(key));
    }

    void bind(string, string);
    void setVar(string &key, double value);

    double getVar(string &key);
};


#endif //APPNOAMYAEL_PROGRAMDATA_H
