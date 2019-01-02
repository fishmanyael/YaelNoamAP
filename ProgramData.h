//
// Created by yael on 26/12/2018.
//

#ifndef PROJET_DATA_H
#define PROJET_DATA_H

#include <string>
#include <vector>
#include <map>
#include <mutex>

using namespace std;

class ProgramData {
    //map<string,string> var_pathes;
    map<string, double> symbol_table;
    mutex locker;
public:

    bool containsKey(string& key);

    void setVar(string &key, double value);

    double getVar(string &key);
};


#endif //PROJET_DATA_H
