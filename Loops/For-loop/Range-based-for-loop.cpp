#include <iostream>
using namespace std;

int main(){

    int array[]{1,2,3,4,5};

    for(int a:array){
        cout<<a<<" ";
    }
    cout<<endl;

    int array1[]{6,7,8,9,10};
    for(auto b : array1){
        cout<<b<<" ";
    }
    cout<<endl;

    int array2[]{11,12,13,14,15};
    for(auto &c : array2){
        cout<<c<<" ";
    }
    cout<<endl;

    int array3[]{16,17,18,19,20};
    for(auto &d : array3){
        d = 3;
        cout<<d<<" ";
    }
    cout<<endl;

    int array4[]{21,22,23,24,25};
    for(const auto &e : array4){
        cout<<e<<" ";
    }
    cout<<endl;


    for(auto f : {1,2,3,4,}){
        cout<<f<<" ";
    }
    cout<<endl;

    return 0;
}

/*
    RANGE-BASED FOR LOOP (C++)

    This program demonstrates different ways of using range-based for loops
    to iterate through arrays and initializer lists.

    Core Concept:
        A range-based for loop automatically iterates over every element
        in a collection (array, vector, initializer list, etc.)
        without using index variables.

    Syntax:
        for (declaration : range){
            // use element
        }

    1. Basic iteration using explicit type (copy)

        for(int a : array)

    Meaning:
        - 'a' is a copy of each element
        - Changing 'a' does NOT affect original array
        - Used for simple read-only operations

    2. Using auto (type deduction, still copy)

        for(auto b : array1)

    Meaning:
        - Compiler automatically detects type (int)
        - Still copies elements into 'b'
        - Cleaner syntax, same behavior as above

    3. Using reference (no copy)

        for(auto &c : array2)

    Meaning:
        - 'c' directly refers to original element
        - No copying happens
        - Efficient for large data or frequent operations

    4. Reference with modification

        for(auto &d : array3){
            d = 3;
        }

    Meaning:
        - Directly modifies original array
        - All elements are changed to 3
        - Shows how references can alter data

    5. Const reference (safe read-only access)

        for(const auto &e : array4)

    Meaning:
        - No copying
        - Cannot modify values
        - Best practice for read-only iteration

    6. Initializer list iteration

        for(auto f : {1,2,3,4})

    Meaning:
        - Works on temporary list of values
        - Useful for quick iteration without arrays

    Key Differences:

        auto x        -> copy (read-only behavior)
        auto &x       -> reference (modifiable)
        const auto &x -> reference (read-only, safest)

    Advantages of range-based for loop:

        - No index management
        - No boundary errors
        - Cleaner and more readable code
        - Works with many container types

    Limitation:

        - No direct access to index
        - Less control over iteration flow

    Conclusion:

        Range-based for loops are preferred for safe and clean iteration.
        Use index-based loops only when position control is required.
*/