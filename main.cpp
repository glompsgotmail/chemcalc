#include <iostream>
#include "Operator.h"
int main() {
    Operator o = Operator("dsd", [](int x []){return x[0]+1;});
    o.performOperation((int[]){1});
}
