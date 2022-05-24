#pragma once
#ifndef MODULES_OSKIN_G_EQUATION_INCLUDE_EQUATION_H_APPLICATION_H_
#define MODULES_OSKIN_G_EQUATION_INCLUDE_EQUATION_H_APPLICATION_H_
#include <string>
#include "include/equation.h"
class appEquation {
private:
    std::string getHelp(const std::string& appname);
    bool checkArgument(const std::string& str);
    int parseArgument(const char* arg);
public:
    std::string operator()(int argc, const char** argv);
};
#endif  // MODULES_OSKIN_G_EQUATION_INCLUDE_EQUATION_H_APPLICATION_H_