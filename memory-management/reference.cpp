#include <iostream>
using namespace std;

int main(){

    //Referent
    int a{10};
    //Reference
    int &ref{a}; // a is referent
    cout<<"a : "<<a<<endl;
    cout<<"ref : "<<ref<<endl;

    int b{100};
    int &ref_1{b};
    ref_1= 6;
    cout<<"b : "<<b<<endl;
    cout<<"ref_1 : "<<ref_1<<endl;
    cout<<"&b : "<<&b<<endl;
    cout<<"&ref_1 : "<<&ref_1<<endl;

    //int &ref_2; //Reference must be initialized

    int x{20};
    int &ref_2{x};
    int y{10};
    ref_2 = y;
    cout<<"x : "<<x<<endl;
    cout<<"y : "<<y<<endl;
    cout<<"ref_2 : "<<ref_2<<endl;

    return 0;
}

/*
    C++ References

    Concepts Demonstrated:

    1. Reference Declaration
       - A reference is an alias (another name) for an existing variable.
       - References are declared using the '&' symbol.
       Example:
           int &ref{a};

    2. Referent
       - The original variable to which a reference is bound.
       Example:
           int a{10};
           int &ref{a};
       - 'a' is the referent.
       - 'ref' is the reference.

    3. Reference Initialization
       - A reference must be initialized when declared.
       - References cannot exist without a referent.
       Example:
           int &ref{a};      // Valid
           int &ref2;        // Error

    4. Alias Behavior
       - A reference is not a new variable.
       - It is simply another name for the same object.
       Example:
           ref = 20;
       - Changes the value of 'a' as well.

    5. Shared Memory Location
       - A reference and its referent share the same memory address.
       Example:
           cout << &a;
           cout << &ref;
       - Both addresses are identical.

    6. Indirect Modification
       - A variable can be modified through its reference.
       Example:
           ref = 50;
       - Equivalent to:
           a = 50;

    7. Binding
       - Once a reference is bound to a variable,
         it cannot be rebound to another variable.
       Example:
           int x{10};
           int y{20};

           int &ref{x};

           ref = y;
       - Copies y's value into x.
       - Does NOT make ref refer to y.

    8. No Null References
       - References must refer to a valid object.
       - Unlike pointers, references cannot be null.

    9. No Separate Storage
       - A reference is not an independent object.
       - It acts as another identifier for existing memory.

    Reference vs Pointer

    References:
        - Must be initialized
        - Cannot be null
        - Cannot be rebound
        - No dereferencing required
        - Share address with referent

    Pointers:
        - Initialization optional
        - Can be nullptr
        - Can point elsewhere later
        - Require '*' for dereferencing
        - Have their own memory address

    Key Terms:
        Reference  -> Alias of a variable
        Referent   -> Original variable being referenced
        Binding    -> Association between reference and referent
        Alias      -> Another name for the same object
*/