//
// Created by yael on 26/12/2018.
//

#include "PrintCommand.h"
#include <iostream>
PrintCommand::PrintCommand(ProgramData p, vector<string>::iterator it) : AbstractCommand(p, it) {

}

void PrintCommand::doCommand() {
    string text=goToNextWord();
    if (text[0]=='\"'){
        text.erase(0,1);
        while (text[text.size()-1]!='\"' && (text.size()<2 ||text[text.size()-2]!='\\')){
            cout<<text<<" ";
            text=goToNextWord();
        }
        text.erase(text.size()-1,1);
        cout<<text<<endl;
    } else{
        double x=programData.getVar(text);
        cout<<x<<endl;
    }
    goToNextWord();
}
