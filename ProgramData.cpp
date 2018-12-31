//
// Created by nsc on 12/31/18.
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