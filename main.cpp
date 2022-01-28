#include <iostream>
#include "Operator.h"
int main() {
    Operator o = Operator("dsd", [](int x){return x+1;});
    o.performOperation();
}
