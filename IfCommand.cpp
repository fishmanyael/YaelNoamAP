//
// Created by yael on 27/12/2018.
//

#include "IfCommand.h"
#include "stack"
void IfCommand::execute() {
    //read the statement
    if (check()) {
        run();
    }
    gotoEnd();
}
