#include <iostream>

namespace Sort{
    void quickSort(){

    }

    void insertionSort(){

    }

    void mergeSort(){

    }

    void bubbleSort(){

    }

    namespace comparison{
        void less(){

        }
        void greater(){

        }
    }
}

namespace{
    void internalFunction(){

    }
}


int main(){
    using namespace Sort::comparison;
    less();

    Sort::comparison::greater();

    internalFunction();

    return 0;
}

/*
Concepts Used:

1. Namespace
   - Sort groups related sorting functions.

2. Nested Namespace
   - comparision is inside Sort.
   - Its functions can be accessed using:
       Sort::comparision::function()

3. using namespace
   - using namespace Sort::comparision;
   - Allows direct access to less().

4. Unnamed Namespace
   - The unnamed namespace contains internalFunction().
   - Its members are limited to this source file.

5. Scope Resolution Operator
   - :: is used to access members of a specific namespace.
*/