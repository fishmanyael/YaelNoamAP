cmake_minimum_required(VERSION 3.13)
project(APPNoamYael)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS -pthread)

add_executable(APPNoamYael main.cpp Interpreter.cpp Interpreter.h ProgramData.cpp ProgramData.h Parser.cpp Parser.h CommandExpression.cpp CommandExpression.h Command.h Plus.h Expression.h BinaryExpression.h Minus.h Mul.h Div.h EqualExpression.h BiggerOrEqualExpression.h SmallerOrEqualExpression.h SmallerExpression.h BiggerExpression.h NotEqualExpression.h ConditionCommand.cpp ConditionCommand.h AbstractCommand.cpp AbstractCommand.h ExpressionHandler.cpp ExpressionHandler.h Number.cpp Number.h IfCommand.cpp IfCommand.h LoopCommand.cpp LoopCommand.h EnterC.cpp EnterC.h SetCommand.cpp SetCommand.h OpenDataServerCommand.cpp OpenDataServerCommand.h SleepCommand.cpp SleepCommand.h PrintCommand.cpp PrintCommand.h)