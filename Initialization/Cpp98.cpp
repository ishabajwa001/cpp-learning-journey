#include <iostream>
#include <string>
using namespace std;

int main(){
    int a; //Uninitialized variable 

    int b = 5; //Copy initialization 

    int c(10); //Direct initialization

    string word; //Default initialization 

    string letter = "Hello"; //Copy Initialization 

    string sentence("Programming is fun as long as there is no bug"); //Direct initialization

    char array[5];

    char characters[6] = {'a','b','c','d','e','f'}; //Aggregate Initialization
    
    char words[6] = "Hello"; //Aggregate Initialization

    //char letters[3]('f','g','h'); Wrong Syntax

    return 0;
}

/*
    C++98 Initialization Concepts

    This program demonstrates the common initialization techniques
    available before C++11 introduced Uniform Initialization.

    Types of Initialization Used:

    1. Uninitialized Variable
       - Variable is declared but not given a value.
       - Built-in types such as int contain garbage values.
       Example:
           int a;
           char array[5];

    2. Copy Initialization
       - Uses the assignment operator (=) during declaration.
       Example:
           int b = 5;
           string letter = "Hello";

    3. Direct Initialization
       - Uses parentheses () to provide an initial value.
       Example:
           int c(10);
           string sentence("Programming is fun");

    4. Default Initialization
       - Common for user-defined types such as std::string.
       - The default constructor is called automatically.
       Example:
           string word;
       Result:
           word contains an empty string ("").

    5. Aggregate Initialization
       - Used mainly for arrays and structures.
       - Values are supplied element-by-element using braces {}.
       Example:
           char characters[6] = {'a','b','c','d','e','f'};

    6. Aggregate Initialization with String Literal
       - A special form of aggregate initialization for character arrays.
       - The compiler automatically stores each character and
         appends the null terminator ('\0').
       Example:
           char words[6] = "Hello";

       Equivalent to:
           char words[6] = {'H','e','l','l','o','\0'};

    Important Notes:
    - C++98 used different initialization syntaxes:
          =   (Copy Initialization)
          ()  (Direct Initialization)
          {}  (Aggregate Initialization)

    - There was no single uniform syntax for all types.

    - C++11 later introduced Uniform Initialization using {}
      so that most objects, arrays, and user-defined types
      could be initialized using the same syntax.
*/