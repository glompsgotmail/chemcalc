#include "Operator.h"

Operator::Operator(std::string name, int (*tIntOperation)(int)){
    this->Name = name;
    this->intOperation = tIntOperation;
};

void Operator::performOperation(int input = NULL) {
    int output;
    if(!input){
        std::string s;
       std::cin >> s;
       try{
            input = std::stoi(s);
       }catch(const std::exception& e){
            std::cout << e.what();
       }
    }
    output = (*intOperation)(input);
    if(!this->OutOperator) {
        std::cout << output << std::endl;
    }
}

