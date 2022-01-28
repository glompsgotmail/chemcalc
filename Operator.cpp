//
// Created by alliang on 1/25/2022.
//

#include "Operator.h"

Operator::Operator(std::string name, int (*tIntOperation)(int [])){
    this->Name = name;
    this->intOperation = tIntOperation;
};

void Operator::performOperation(int input []) {
    int output;

    output = (*intOperation)(input);
    if(!this->OutOperator) {
        std::cout << output << std::endl;
    }else{
        OutOperator->performOperation(output);
    }
}

