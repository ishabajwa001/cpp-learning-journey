#include <iostream>
using namespace std;

int main(){

    int array[]{1,2,3,4,5};

    for(int i{0} ; i < 5 ; i++){
        cout<<array[i]<<" ";
    }

    cout<<endl;

    return 0;
}

/*
    Arrays and For Loops in C++

    An array is a collection of elements of
    the same data type stored in contiguous
    memory locations.

    Syntax:

        dataType arrayName[size];

    Example:

        int array[]{1,2,3,4,5};

    The compiler automatically determines
    the size of the array from the number
    of elements provided.

    Array Indexing

    Elements are accessed using an index.

    Example:

        array[0] -> 1
        array[1] -> 2
        array[2] -> 3
        array[3] -> 4
        array[4] -> 5

    Note:
        Array indexing starts from 0.

    Traversing an Array

    A for loop is commonly used to access
    every element of an array.

    Example:

        for(int i{0}; i < 5; i++){
            cout << array[i] << " ";
        }

    Program Analysis

        int i{0}
            Starts from the first element.

        i < 5
            Continues while i remains a
            valid index.

        i++
            Moves to the next element.

        array[i]
            Accesses the current element.

    Why i < 5?

        Array contains 5 elements.

        Valid indices:

            0
            1
            2
            3
            4

        Index 5 does not exist.

    Out of Bounds Access

    Example:

        array[5];

    This is invalid because index 5 is
    outside the array boundary and results
    in undefined behavior.

    Quick Revision

        int array[]{1,2,3,4,5};
            Array of 5 integers.

        array[0]
            First element.

        array[4]
            Last element.

        for(int i{0}; i < 5; i++)
            Traverses the entire array.

        i++
            Moves to the next index.

        Array indexing starts at 0.

        Accessing an invalid index
            Causes undefined behavior.
*/