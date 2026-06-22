#include <iostream>
using namespace std;

int main(){

    //Take radius as input
    float radius{0};
    cout<<"Enter the radius : ";
    cin>>radius;

    //Make PI as constant so it can't be modified 
    const float PI{3.14f};

    //Calculate Area
    float area{PI * radius * radius};
    cout<<"Area : "<<area<<endl;

    //Calculte Circumference
    float circumference{PI * 2 * radius};
    cout<<"Circumference : "<<circumference<<endl;

    return 0;
}

/*
    WHAT IS CONST IN C++?

    const is a keyword used to make a variable read-only after initialization.
    Once a value is assigned, it cannot be changed during program execution.

    RULES OF CONST:

    1. Must be initialized at the time of declaration
       Example:
           const int x = 10;   // correct
           const int y;        // error

    2. Cannot be modified after initialization
       Example:
           const float PI = 3.14f;
           PI = 3.15f;   // error

    3. Value remains fixed for the entire scope of the variable

    4. Can be used with any data type (int, float, char, etc.)

    5. Can also be used with pointers (advanced rule):
           const int *p;        // value is constant
           int *const p;        // pointer is constant
           const int *const p;  // both are constant

    WHY WE USE CONST:

    1. Prevents accidental changes to important values

    2. Improves code safety and reduces bugs

    3. Clearly shows intent:
       "this value should NOT change"

    4. Helps compiler catch logical mistakes at compile time

    5. Makes code cleaner and easier to understand

    CONCLUSION:

    const turns a normal variable into a protected value.
    It ensures important data remains unchanged and improves
    reliability, readability, and correctness of the program.
*/