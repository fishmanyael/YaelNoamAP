#ifndef COMMAND_H
#define COMMAND_H

#include <vector>
#include <string>

using namespace std;

class Command {
protected:
	int _argumentsAmount;

public:
	virtual int getArgumentsAmount() = 0;
	virtual void doCommand(vector<string>& arguments) = 0;
};

#endif