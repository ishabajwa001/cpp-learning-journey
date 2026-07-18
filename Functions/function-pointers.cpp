#include <iostream>
using namespace std;

void Print(int count , char c){
    for(int i = 0 ; i <=count ;i++){
        cout<<c;
    }
    cout<<endl;
}

void endMessage(){
    cout<<"This is the End of Program"<<endl;
}

int main(){
    //Position of atexit doesn't depend
    atexit(endMessage);
    Print(8,'#');
    void(*pfn)(int,char) = &Print;
    // void(*pfn)(int,char) = Print; //This line also works the same as above one 
    (*pfn)(5,'$');
    pfn(9,'@');
    cout<<"This is the end of main"<<endl;
    return 0;
}

/*
Concepts Used:

1. Function Pointer
   - A function pointer stores the address of a function.
   - The pointer's signature must match the function's signature.
   - pfn points to the Print function.

2. Function Pointer Declaration
   - void (*pfn)(int, char) = Print;
   - The function returns void.
   - It accepts an int and a char.
   - pfn is a pointer to a function.

3. Calling a Function Through a Pointer
   - (*pfn)(5, '$');
   - pfn(9, '@');
   - Both syntaxes call the function stored in pfn.
   - The function name is not directly used to invoke Print.

4. atexit()
   - atexit() registers a function to be called when the program terminates.
   - It accepts a function pointer.
   - endMessage() is called after main() finishes.

5. Function Signature
   - Print has the signature: void(int, char).
   - The function pointer must have the same return type and parameters.

6. Loop Condition
   - The loop uses i <= count.
   - Therefore, the loop executes count + 1 times.
*/