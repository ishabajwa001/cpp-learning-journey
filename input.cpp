#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter your lucky Number : ";
    cin>>num;

    char letter;
    cout<<"Enter the fist alphabat of your name : ";
    cin>>letter;

    bool like_cpp;
    cout<<"C++ is the best language from all the programming language : ";
    cin>>like_cpp;

    cout<<"I know these things about you ..."<<endl;
    cout<<"Your name start with the letter "<<letter;
    cout<<" and your lucky number is "<<num;
    cout<<" and the statement 'C++ is the best language from all the pr4ogramming language' is "<<like_cpp;
}

/*
    This program demonstrates input handling in C++ using cin.

    INPUT (cin):
    - cin is used to take input from the user via keyboard.
    - It reads and stores values into variables.

    VARIABLES:
    - int num:
        Stores an integer value (lucky number).
    - char letter:
        Stores a single character (first letter of name).
    - bool like_cpp:
        Stores true/false value.

    IMPORTANT NOTE (VARIABLE DECLARATION STYLE):
    There are two ways to declare variables:
    
    1) At the top of the program:
       - All variables are declared before logic starts.
       - Useful in very small programs but can reduce readability.

    2) Near usage (recommended modern style):
       - Variables are declared close to where they are used.
       - Improves readability and understanding of code.
       - Reduces confusion in larger programs.

    BEST PRACTICE:
    - Prefer declaring variables near their usage instead of
      dumping everything at the top.

    FLOW OF PROGRAM:
    1. Take lucky number input using cin.
    2. Take first letter input using cin.
    3. Take boolean input (0 or 1) using cin.
    4. Display collected information using cout.
*/
