#include <iostream>
using namespace std;

//int type function just for taking input
int getNumber(){
    int num;
    cout<<"Enter the Number : ";
    cin>>num;
    return num;
}
// Function doing addition and takes two parameters
int addNumbers(int x , int y ){
    int sum = x+y;
    return sum;    
}

//void return type  function to display result
void printResult(int total){
    cout<<"The result of addition is : "<<total;
    return; //optional
}

//main function
int main(){
    int num1 = getNumber();
    int num2 = getNumber();

    int result = addNumbers(num1,num2);

    printResult(result);
}

/*
Concepts Used:

1. Functions
   - A function is a reusable block of code that performs a specific task.
   - It improves code structure, readability, and avoids repetition.

2. Return Type
   - A return type defines what a function sends back after execution.
   - Example: int functions return integer values.
   - addNumbers() returns an int because it outputs the sum.

3. void Function
   - void means the function returns nothing.
   - It is used when a function only performs an action.
   - printResult() only displays output, so no value is returned.

4. return statement
   - Used to send a value back to the calling function.
   - Mandatory in non-void functions.
   - Optional in void functions (can be used to exit early).

5. Parameters & Arguments
   - Parameters: variables in function definition (x, y).
   - Arguments: actual values passed during function call (num1, num2).

6. Program Flow
   - getNumber() → takes input from user
   - addNumbers() → processes data (addition)
   - printResult() → displays final output

7. Main Idea
   - main() controls execution.
   - Other functions handle specific tasks (input, process, output).
*/