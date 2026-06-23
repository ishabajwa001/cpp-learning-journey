#include <iostream>
using namespace std;

int main(){

    //for loop that prints the value from 0 - 10
    for(int i{0} ; i <=10 ; i++){
        cout<<i<<endl;
    }

    return 0;
}

/*
    For Loop in C++

    A for loop is used when the number of
    iterations is known beforehand.

    Syntax:

        for(initialization; condition; update){
            // statements
        }

    Components of a For Loop

    1. Initialization
       - Executes only once before the loop starts.
       - Usually used to create and initialize
         the loop control variable.

       Example:
           int i{0};

    2. Condition
       - Checked before each iteration.
       - If true, the loop body executes.
       - If false, the loop terminates.

       Example:
           i <= 10

    3. Update Expression
       - Executes after every iteration.
       - Usually increments or decrements
         the loop variable.

       Example:
           i++

    Program Analysis

        for(int i{0}; i <= 10; i++)

    Execution:

        i = 0   -> print 0
        i = 1   -> print 1
        i = 2   -> print 2
        ...
        i = 10  -> print 10
        i = 11  -> condition becomes false

    Loop Variable Scope

    Example:

        for(int i{0}; i <= 10; i++){
            cout << i;
        }

    The variable i exists only inside
    the for loop and is destroyed when
    the loop finishes.

    Common Variations

    Count Up:

        for(int i{0}; i < 5; i++)

    Count Down:

        for(int i{10}; i >= 0; i--)

    Increment by 2:

        for(int i{0}; i <= 10; i += 2)

    Infinite Loop:

        for(;;){
            // runs forever
        }

    Quick Revision

        Initialization
            Runs once.

        Condition
            Checked before every iteration.

        Update
            Runs after every iteration.

        for(int i{0}; i <= 10; i++)
            Prints values from 0 to 10.

        i++
            Increases i by 1.

        i--
            Decreases i by 1.
*/