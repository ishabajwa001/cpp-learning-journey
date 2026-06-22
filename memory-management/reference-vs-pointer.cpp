#include <iostream>
using namespace std;

// Swap raw values
void Swap(int x , int y){
    int temp{x};
    x = y;
    y = temp;
}

//Swap by going to address
void Swap_pointer(int *x , int *y){
    int temp{*x};
    *x = *y;
    *y = temp;
}

//Swap by using reference
void Swap_ref(int &x , int &y){
    int temp{x};
    x = y;
    y = temp;
}

//Print the value by dereferencing
void Print_pointer(int *ptr){
    if (ptr != nullptr){
        cout<<"ptr : "<<*ptr<<endl;
    }
}

//Print by using reference
void Print_ref(int &ref){
    cout<<"ref : "<<ref<<endl;
}

int main(){

    int a{5};
    int b{10};
    
    Swap(a,b);
    cout<<"Pass as raw"<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    // here a = 5 and b = 10

    Swap_pointer(&a,&b);
    cout<<"Pass by address (pointer)"<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    //here a = 10 and b = 5

    Swap_ref(a,b);
    cout<<"Pass as reference"<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    //here a = 5 and b = 10

    int c{5};
    Print_pointer(&c);
    Print_ref(c);

    return 0;
}

/*
    C++ Functions: Pass by Value vs Pointer vs Reference

    1. Pass by Value
       - Function gets a copy of variables.
       - Changes do NOT affect original variables.
       Example:
           void Swap(int x, int y)

    2. Pass by Pointer (Address Passing)
       - Function receives memory addresses.
       - Uses dereferencing (*) to access and modify values.
       - Changes affect original variables.
       Example:
           void Swap_pointer(int *x, int *y)

    3. Pass by Reference
       - Function receives alias of original variables.
       - No dereferencing needed.
       - Changes directly affect original variables.
       Example:
           void Swap_ref(int &x, int &y)

    4. Pointer-based Printing
       - Accepts address of variable.
       - Must check for nullptr before using.
       - Uses *ptr to access value.
       Example:
           void Print_pointer(int *ptr)

    5. Reference-based Printing
       - Works directly on original variable.
       - Cannot be null.
       - No dereferencing required.
       Example:
           void Print_ref(int &ref)

    Key Differences:

    Pass by Value:
        - Works on copies
        - No effect on original data

    Pass by Pointer:
        - Uses addresses
        - Can be null
        - Requires dereferencing

    Pass by Reference:
        - Acts as alias
        - Cannot be null
        - Cleaner syntax
*/