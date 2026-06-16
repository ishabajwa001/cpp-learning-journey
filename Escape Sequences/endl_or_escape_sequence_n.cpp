#include <iostream>
using namespace std;

int main(){
    cout<<"Hello Friends";
    cout<<endl;
    cout<<"I hope you are doing fine\n";
    cout<<4.5<<"\n";
    cout<<'Y'<<"\n";
    cout<<54.4523f<<"\n";
    cout<<"Well C++ is fun";
    cout<<"\n";
}

/*
    This program demonstrates the difference between endl and "\n".

    OUTPUT FUNCTION BASICS:
    - C++ uses a buffer (temporary memory area) to store output
      before displaying it on the screen.

    FLUSH:
    - flush means forcing the buffer to immediately send data
      to the screen instead of waiting.
    - It ensures output appears instantly.

    DIFFERENCE:
    - "\n" → only moves to a new line (no flush, faster)
    - endl → moves to a new line + flushes the buffer

    WHEN TO USE:
    - Use "\n" for normal output (faster performance)
    - Use endl when you need immediate output (like prompts or debugging)

    This program uses both to show that they behave similarly
    in appearance but are different internally.
*/