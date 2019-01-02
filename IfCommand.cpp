//
// Created by yael on 27/12/2018.
//

#include "IfCommand.h"
#include "stack"
void IfCommand::execute() {
    getCondition();
    if (check()) {
        run();
    }
    gotoEnd();
}
