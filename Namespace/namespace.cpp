#include <iostream>

namespace AVG {
    float calculate(float a , float b){
        return (a+b)/2;
    }
}

namespace ADD{
    float calculate(float a,float b){
        return a+b;
    }
}
int main(){

    //way 1
    using namespace AVG;
    std::cout<<calculate(4.3,5.6)<<std::endl;

    //way2
    using AVG::calculate;
    std::cout<<calculate(3.4,5.6)<<std::endl;

    //way3
    std::cout<<AVG::calculate(4.5,5.4)<<std::endl;

    // using namespace ADD;
    // std::cout<<calculate(4.3,5.6)<<std::endl;

    // using ADD::calculate;
    // std::cout<<calculate(3.4,5.6)<<std::endl;

    std::cout<<ADD::calculate(4.6,4.5)<<std::endl;

    return 0;
}

/*
Concepts Used:

1. Namespaces
   - AVG and ADD organize functions and avoid name conflicts.
   - Both namespaces contain a function named calculate().

2. Namespace Access
   - using namespace AVG; accesses all AVG members directly.
   - using AVG::calculate; imports only calculate().
   - AVG::calculate() directly accesses the function using ::.

3. Scope Resolution Operator
   - :: is used to access a specific namespace member.
   - ADD::calculate() calls the calculate() function from ADD.

4. std Namespace
   - std::cout and std::endl belong to the standard namespace.
*/