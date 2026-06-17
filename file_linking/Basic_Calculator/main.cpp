#include <iostream>
#include "Get_Input.h"
#include "Operations.h"
using namespace std;

// main function
int main(){
    cout<<"This Program is used to perform mathematical operations";
    cout<<endl;

    int num1 = getIntegerNumber();
    float num2 = getFloatNumber();

    cout<<"Addition : "<<performAddition(num1,num2);
    cout<<endl;

    cout<<"Subtraction : "<<performSubstraction(num1,num2);
    cout<<endl;

    cout<<"Multiplication : "<<performMultiplication(num1,num2);
    cout<<endl;

    cout<<"Division : "<<performDivision(num1,num2);

    return 0;
}


/*
CONCEPTS USED:
--------------
- Functions (modular programming)
- Header files (.h) for function declarations
- Source files (.cpp) for function definitions
- Function prototypes vs definitions
- Parameter passing & return values
- Basic type conversion (int ↔ float)

DATA FLOW:
----------
User Input → Input Functions → Operation Functions → Output

HEADER FILES:
-------------
- Store function declarations (signatures only)
- Allow sharing functions across multiple .cpp files
- Prevent rewriting prototypes in every file
*/