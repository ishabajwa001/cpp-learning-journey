#include <iostream>
using namespace std;

int main(){

    //Take radius as input
    float radius{0};
    cout<<"Enter the radius : ";
    cin>>radius;

    //declare and initialize pi
    float pi{3.14f};

    //Calculate Area
    float area{pi * radius * radius};
    cout<<"Area : "<<area<<endl;

    //Calculte Circumference
    float circumference{pi * 2 * radius};
    cout<<"Circumference : "<<circumference<<endl;

    return 0;
}

/*
    Why using a normal variable for PI is still NOT suitable:

    1. It allows accidental modification
       Even though pi is meant to represent a universal constant,
       a normal variable can be changed anywhere in the program:
           pi = 0;  // breaks all calculations silently

    2. It does NOT communicate intent clearly
       A reader cannot immediately know whether pi is:
       - a fixed constant
       - or just a temporary variable

    3. It reduces code safety
       The compiler will not protect pi from being overwritten,
       so logical mistakes become possible at runtime.

    4. It creates maintenance risk
       In larger programs, another part of the code might reuse
       or modify pi unintentionally, causing hidden bugs.

    5. It weakens mathematical correctness in code
       PI is a universal constant in mathematics.
       Representing it as a mutable variable contradicts its meaning.

    ------------------------------------------------------

    Conclusion:
    Using a variable for PI works, but it is semantically wrong
    because it behaves like a value that "can change",
    even though PI should NEVER change.
*/