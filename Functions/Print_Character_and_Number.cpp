#include <iostream>
using namespace std;
double getNumber();
void printResult(char character , double num);

// Function for taking a character from user and store it 
char getCharacter(){
    char character;
    cout<<"Enter the Character : ";
    cin>>character;
    return character;
}

// main function
int main(){
    char character = getCharacter();
    double num = getNumber();

    printResult(character,num);
    return 0;
}

//get Number from user 
double getNumber(){
    double num;
    cout<<"Enter the floating point number (decimal) : ";
    cin>>num;
    return num;
}

//print the result (character and floating point number)
void printResult(char character,double num){
    cout<<"Magic keyword : "<<character<<num<<endl;
}

/*
Concepts Used:

1. Function Prototype (Declaration)
   - A function prototype tells the compiler about a function before its actual use.
   - It includes:
        → return type
        → function name
        → parameter list (if any)
   - It does NOT contain the function body.
   - Example:
        double getNumber();
        void printResult(char, double);

2. Function Declaration
   - Declaration is another term for prototype.
   - It informs the compiler that the function exists somewhere in the program.
   - It prevents compilation errors when functions are used before definition.

3. Function Definition
   - The function definition contains the actual implementation (logic).
   - It includes the function body inside curly braces { }.
   - Example:
        double getNumber() {
            statements or logic
        }

4. Difference Between Declaration and Definition
   - Declaration → only signature (no body)
   - Definition → full working code (with body)

5. Purpose of Using Prototypes
   - Allows calling functions before writing their definitions.
   - Helps organize code in modular structure.
   - Improves readability in large programs.

6. Program Structure Idea
   - Prototypes are written before main()
   - main() controls execution
   - Definitions are written after main() or in separate files

7. Data Flow

   - Data flow describes how information moves through the program
     from input → processing → output.

   In this program:

   User Input
        ↓
   getCharacter()
        ↓
   getNumber()
        ↓
   main() (stores returned values)
        ↓
   printResult(character, num)
        ↓
   Output Display
*/