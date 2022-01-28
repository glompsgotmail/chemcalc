//
// Created by alliang on 1/25/2022.
//


#ifndef CHEMCALC_OPERATOR_H
#define CHEMCALC_OPERATOR_H
#include <string>
#include <iostream>

class Operator {
public:
    Operator(std::string name, int (*tIntOperation)(int []));
    std::string Name;
    Operator* InOperator;
    Operator* OutOperator;
    std::string InUnit;
    std::string OutUnit;
    int input;
    int output;
    void performOperation(int input []);





protected:
    int (*intOperation)(int);
};


#endif //CHEMCALC_OPERATOR_H
