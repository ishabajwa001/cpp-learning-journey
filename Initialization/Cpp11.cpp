#include <iostream>
#include <string>
using namespace std;

int main(){

    int a{}; //Value Initialization 
    int b{5}; //Direct list  Initialization
    int c = {5}; //Copy list Initialization
    int d(5);  //Direct Initialization

    string empty{}; //Value Initialization
    string greeting{"Hello"}; //Direct list Initialization
    string word ={"Word"}; //Copy list intialization

    char array[4]{}; // Value Initialization (all elements become '\0')
    char letters[5]{'a','b','c','d','\0'}; // Direct List Initialization


    //int f()
    //int g{3.14}; //Error 
    float h{3}; //Direct Initialization

    return 0;
}

/*
C++11 Uniform Initialization Concepts

This program demonstrates the common initialization techniques
introduced and improved in C++11 through Uniform Initialization.

Types of Initialization Used:

1. Value Initialization
   - Uses empty braces {}.
   - Built-in types are initialized to zero.
   Example:
       int a{};
       char array[4]{};

   Result:
       a becomes 0
       all array elements become '\0'

2. Direct List Initialization
   - Uses braces {} with values.
   Example:
       int b{5};
       string greeting{"Hello"};

3. Copy List Initialization
   - Uses the assignment operator (=) together with braces {}.
   Example:
       int c = {5};
       string word = {"Word"};

4. Direct Initialization
   - Uses parentheses () to provide an initial value.
   Example:
       int d(5);

5. Aggregate Initialization
   - Used mainly for arrays and structures.
   - Values are supplied element-by-element using braces {}.
   Example:
       char letters[5]{'a','b','c','d','\0'};

Important Notes:

- C++11 introduced Uniform Initialization using {}.

- The same brace syntax can be used for most built-in
  types, arrays, and user-defined types.

- Direct List Initialization is generally preferred
  because it provides a consistent syntax and prevents
  narrowing conversions.

  Example:
      int x{3.14};    // Error
      int y = 3.14;   // Allowed, becomes 3

- Brace initialization also helps avoid the
  "Most Vexing Parse".

  Example:
      string name();

  Many programmers expect this to create an object.

  Reality:
      It declares a function named 'name' that
      takes no arguments and returns a string.

  Using braces removes this ambiguity:

      string name{};

- Uniform Initialization was introduced in the
  C++11 Standard and is supported by all later
  C++ standards (C++14, C++17, C++20, C++23, C++26).

- Modern C++ code generally prefers brace
  initialization whenever possible.

*/
