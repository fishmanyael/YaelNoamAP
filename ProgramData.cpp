//
// Created by yael on 26/12/2018.
//

#include "ProgramData.h"

void ProgramData::setVar(string &key, double value) {
    locker.lock();
    symbol_table[key] = value;
    locker.unlock();
}


double ProgramData::getVar(string &key) {
    return symbol_table[key];
}

bool ProgramData::containsKey(string &key) {
    return (bool)(symbol_table.count(key));
}

