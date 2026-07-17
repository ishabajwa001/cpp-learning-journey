#include <iostream>
using namespace std;

// int Square(int x){
//     return x*x;
// }

// Macros are processed by the preprocessor before the compiler.
//try to uncomment and see the difference in output
// #define Square(x) x*x

inline int Square(int x){
    return x*x;
}

int main(){
    int val{5};
    int resultSquare{Square(val)};
    cout<<"Square of "<<val<<" is "<<resultSquare<<endl;
    
    int resultSquareMacro{Square(5+1)};
    cout<<"Square of "<<5<<" + "<<1<<" using macro is "<<resultSquareMacro<<endl;

    return 0;
}

/*
Concepts Used:

1. Macro Text Substitution
   - Macros replace the argument with the given expression as plain text.
   - #define Square(x) x*x does not evaluate the expression like a function.

2. Operator Precedence
   - Square(5+1) becomes 5+1*5+1 after macro substitution.
   - Multiplication has higher precedence than addition.
   - The expression is evaluated as 5+(1*5)+1, which gives 11.

3. Using Parentheses in Macros
   - Parentheses can be used to group the macro argument and operation.
   - #define Square(x) (x)*(x) changes Square(5+1) into (5+1)*(5+1).
   - The expression is evaluated as 6*6, which gives 36.

4. Inline Function Evaluation
   - Inline functions behave like normal functions.
   - The argument 5+1 is evaluated first.
   - The result 6 is passed to the Square() function.
   - The function then calculates 6*6, which gives 36.

5. Main Idea
   - Parentheses can make macros safer by controlling operation order.
   - Inline functions are still safer because they have function semantics.
*/