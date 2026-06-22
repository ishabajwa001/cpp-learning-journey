#include <iostream>
using namespace std;

int main(){
    int *p; //Not recommended
    int *p1,*p2,p3;  //p3 is not a pointer but a variable

    int x{10};
    cout<<&x<<endl; //give out adress of a variable

    int *p4{&x};
    cout<<p4<<endl;
    cout<<*p4<<endl; //dereferencing 

    //float *p5 = &x; //type can't be this

    void *p5{&x}; //void is allowed

    void *p6;

    int a{20};
    int *ptr{&a};
    *ptr = 11; //Assign 11 to address of a
    int b{*ptr}; //Read a value from address of a
    cout<<a<<endl;
    cout<<b<<endl;

    void *p7{nullptr};
    //cout<<*p7<<endl; //nullpointer can't be read
    //*p7 = 56; //can't assign value to a null pointer

    //float type
    float f{3.14};
    float *p8{&f};
    cout<<p8<<endl;
    cout<<*p8<<endl;

    return 0;
}

/*
    C++ Pointer Fundamentals

    Concepts Demonstrated:

    1. Pointer Declaration
       - A pointer stores the memory address of another variable.
       Example:
           int *ptr;

    2. Uninitialized Pointer
       - A pointer declared without initialization contains a garbage address.
       Example:
           int *p;

    3. Multiple Pointer Declarations
       - The '*' belongs to the variable, not the type.
       Example:
           int *p1, *p2, p3;
       - p1 and p2 are pointers.
       - p3 is a normal integer variable.

    4. Address-of Operator (&)
       - Returns the memory address of a variable.
       Example:
           &x

    5. Pointer Initialization
       - A pointer can be initialized with the address of a variable
         of the same type.
       Example:
           int *ptr{&x};

    6. Dereferencing Operator (*)
       - Accesses the value stored at the address held by a pointer.
       Example:
           *ptr

    7. Type Safety
       - Pointer types must match the data type they point to.
       Example:
           int *ptr{&x};      // Valid
           float *ptr{&x};    // Invalid

    8. Void Pointer (void*)
       - Can store the address of any object type.
       - Cannot be dereferenced directly.
       Example:
           void *ptr{&x};

    9. Modifying Data Through a Pointer
       - Changing a value through a pointer changes the original variable.
       Example:
           *ptr = 11;

    10. Reading Data Through a Pointer
        - A value can be accessed through its address.
        Example:
            int b{*ptr};

    11. Null Pointer
        - Represents a pointer that points to no valid object.
        Example:
            int *ptr{nullptr};

    12. Null Pointer Safety
        - Dereferencing a null pointer causes undefined behavior.
        Example:
            *ptr;   // Invalid if ptr == nullptr

    13. Float Pointer
        - A pointer can store the address of a float variable.
        Example:
            float f{3.14f};
            float *ptr{&f};

    Key Terms:
        Pointer        -> Stores a memory address
        Address        -> Location of data in memory
        Dereference    -> Access data through an address
        nullptr        -> Represents no valid address
        void*          -> Generic pointer type
        int*           -> Pointer to int
        float*         -> Pointer to float
*/