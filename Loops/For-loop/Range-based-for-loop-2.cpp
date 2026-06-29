#include <iostream>
using namespace std;

int main(){

    //manually give the index
    int array[]{1,2,3,4,5};

    int *beg_array{&array[0]};
    int *end_array{&array[5]};

    while(beg_array != end_array){
        cout<<*beg_array<<" ";
        beg_array++;
    }
    cout<<endl;


    // use the end and begin function for knowing the exact address 
    int arr[]{1,2,3,4,5};
    int *beginning{begin(arr)};
    int *ending{end(arr)};
    //here while loop is used 
    while(beginning != ending){
        cout<<*beginning<<" ";
        beginning++;
    }
    cout<<endl;

    //Used the for range based loop
    for(auto x : array){
        cout<<x<<" ";
    }
    cout<<endl;

    //Same login behind the range based for loop but with simple for loop
    auto &&range{array};
    auto begin_array{begin(array)};
    auto ending_array{end(array)};

    for(;begin_array != ending_array ; begin_array++){
        auto v = *begin_array;
        cout<<v<<" ";
    }
    cout<<endl;

    return 0;
}

/*
    UNDERSTANDING RANGE-BASED FOR LOOP INTERNALS (C++)

    This program demonstrates four different methods of traversing an array
    and explains how a range-based for loop works internally.

    Core Concept:
        A range-based for loop is syntactic sugar provided by C++.
        Behind the scenes, the compiler uses begin(), end(), iterators
        (or pointers for arrays), dereferencing (*), comparison (!=),
        and increment (++) to visit every element in a range.

    1. Manual Pointer Traversal

        int *beg_array{&array[0]};
        int *end_array{&array[5]};

        while(beg_array != end_array){
            cout << *beg_array;
            beg_array++;
        }

    Meaning:
        - Creates a pointer to the first element.
        - Creates another pointer one position past the last element.
        - Uses pointer arithmetic (++) to move through the array.
        - Uses dereference (*) to access each value.
        - Demonstrates how arrays can be traversed using raw pointers.

    2. Using begin() and end()

        int *beginning{begin(arr)};
        int *ending{end(arr)};

    Meaning:
        - begin(arr) returns a pointer to the first element.
        - end(arr) returns a pointer one position past the last element.
        - Removes the need to manually calculate array boundaries.
        - Makes the code safer and easier to maintain.

    3. Range-Based For Loop

        for(auto x : array){
            cout << x;
        }

    Meaning:
        - Automatically iterates through every element.
        - 'auto' lets the compiler determine the element type.
        - 'x' is a copy of each array element.
        - Changes to 'x' do not modify the original array.
        - This is the simplest and most readable way to traverse a range.

    4. Internal Expansion of Range-Based For Loop

        auto &&range{array};

        auto begin_array{begin(range)};
        auto ending_array{end(range)};

        for(; begin_array != ending_array; ++begin_array){
            auto value = *begin_array;
            cout << value;
        }

    Meaning:
        - Demonstrates the logic the compiler conceptually generates.
        - auto&& creates a forwarding reference to the range without copying it.
        - begin() obtains the starting iterator (pointer).
        - end() obtains the ending iterator (one past the last element).
        - != checks whether the iteration has reached the end.
        - ++ moves to the next element.
        - * accesses the current element.

    Advantages

        - Demonstrates both low-level and high-level array traversal.
        - Shows how modern C++ simplifies iteration.
        - Explains what the compiler does behind a range-based for loop.
        - Reinforces understanding of pointers and iterators.

    Conclusion

        A range-based for loop is not a special looping mechanism.
        It is a convenient syntax that the compiler translates into
        iterator (or pointer) operations using begin(), end(),
        dereferencing (*), comparison (!=), and increment (++).

        Understanding this internal implementation helps build a stronger
        foundation in C++ pointers, iterators, and modern language features.
*/