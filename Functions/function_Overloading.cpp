#include <iostream>
using namespace std;

int Add(int a , int b){
    return a+b;
}

double Add(double a,double b){
    return a+b;
}

// This functions have same arguments and type will cause error
/*void print(int x){
    cout<<x<<endl;
}
void print(int x){}
*/

void Print(int *x){
    cout<<x<<endl;
}

void Print(const int* x){
    cout<<x<<endl;
}

int main(){
    int result{Add(3,5)};
    cout<<result<<endl;

    //May cause warning and also it will be type cast to int 
    // int result_1{Add(3.1,6.2)};
    // cout<<result_1<<endl;
    
    double result_2{Add(3.1,6.2)};
    cout<<result_2<<endl;

    // int result_3{Add(3,6.2)};
    // cout<<result_3<<endl;

    //print(3);
    int x = 1;
    Print(&x);

    const int y = 2;
    Print(&y);

    return 0;
}

/*
Concepts Used:

1. Function Overloading
   - Multiple functions can have the same name with different parameters.
   - Add() is overloaded for int and double values.

2. Static Polymorphism
   - Function overloading is an example of static polymorphism.
   - The compiler selects the correct function at compile time.

3. Pointer Overloading
   - Print(int*) and Print(const int*) are overloaded functions.
   - The const qualifier helps distinguish between them.

4. Main Idea
   - Function overloading improves code readability and convenience.
*/