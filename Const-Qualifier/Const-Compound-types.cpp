#include <iostream>
using namespace std;

void Print(int *ptr){
    cout<<*ptr<<endl;
    *ptr = 700;
}

void PrintConstPtr(const int *ptr){
    cout<<*ptr<<endl;
    // *ptr = 700;
}

void PrintRef(const int &ref){
    cout<<ref<<endl;
}

// void PrintLiteralRef(int &ref){
//     cout<<ref<<endl;
// }

int main(){

    // const int CHUNK_SIZE;
    // int *ptr = &CHUNK_SIZE;
    // *ptr = 1;

    const int WORD_SIZE{512};
    const int *ptr1{&WORD_SIZE};

    //*ptr1 =1;   //const can't be modified

    const int SIZE{225};
    const int *const ptr2{&SIZE};

    int x{10};
    int *ptr3{&x};
    cout<<"x : ";
    Print(&x);
    cout<<"main -> x : "<<x<<endl;

    int y{10};
    int *ptr4{&y};
    cout<<"y : ";
    PrintConstPtr(&y);
    cout<<"main -> y : "<<y<<endl;

    int a{5};
    cout<<"a : ";
    PrintRef(a);

    //PrintLiteralRef(1);
    PrintRef(1);

    return 0;
}

/*
    Const with Pointers and References in C++

    Const can be applied to:
    1. The value being pointed to.
    2. The pointer itself.
    3. Both the value and the pointer.
    4. References.

    Pointer to Const

    Syntax:
        const int *ptr;
        int const *ptr;

    Meaning:
        - The value being pointed to is constant.
        - The pointer itself can change.

    Example:
        int x{10};
        int y{20};

        const int *ptr{&x};

        ptr = &y;      // Allowed
        *ptr = 100;    // Error

    Read as:
        ptr is a pointer to a const int.

    Const Pointer

    Syntax:
        int *const ptr{&x};

    Meaning:
        - The pointer cannot point somewhere else.
        - The value can still be modified.

    Example:
        int x{10};
        int y{20};

        int *const ptr{&x};

        *ptr = 100;    // Allowed
        ptr = &y;      // Error

    Read as:
        ptr is a const pointer to int.

    Const Pointer to Const Data

    Syntax:
        const int *const ptr{&x};

    Meaning:
        - The pointer cannot change.
        - The value cannot change.

    Example:
        ptr = &y;      // Error
        *ptr = 100;    // Error

    Read as:
        ptr is a const pointer to a const int.

    Const Pointer as Function Parameter

    Syntax:
        void Print(const int *ptr);

    Purpose:
        - Prevent accidental modification of data.
        - Function can only read the value.

    Example:
        void Print(const int *ptr){
            cout << *ptr << endl;
        }

    Const References

    Syntax:
        const int &ref{x};

    Meaning:
        - Reference cannot modify the original value.
        - No copy of the object is created.
        - Can bind to variables and literals.

    Example:
        int x{10};

        const int &ref{x};

        // ref = 20;   Error

    Const Reference as Function Parameter

    Syntax:
        void Print(const int &ref);

    Purpose:
        - Avoid copying.
        - Prevent modification.
        - Accept both variables and literals.

    Example:
        Print(x);      // Allowed
        Print(100);    // Allowed

    Non-Const References

    Syntax:
        int &ref{x};

    Rules:
        - Must bind to an lvalue.
        - Cannot bind directly to literals.

    Example:
        int x{10};

        int &ref{x};   // Allowed
        int &ref{10};  // Error

    Quick Revision

    int *ptr
        Pointer to int

    const int *ptr
        Pointer to const int

    int *const ptr
        Const pointer to int

    const int *const ptr
        Const pointer to const int

    int &ref
        Reference to int

    const int &ref
        Reference to const int

    Reading Rule

    Read declarations from right to left.

    const int *ptr
        ptr -> pointer -> to const int

    int *const ptr
        ptr -> const pointer -> to int

    const int *const ptr
        ptr -> const pointer -> to const int

    Easy Memory Trick:

        const int *ptr
            Data is constant.

        int *const ptr
            Pointer is constant.

        const int *const ptr
            Both are constant.
*/