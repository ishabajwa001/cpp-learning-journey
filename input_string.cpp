#include <iostream>
using namespace std;

int main(){

    char full_name[529];
    cout<<"Enter your Full name : ";
    cin.getline(full_name,529,'\n');
    cout<<"Your name is "<<full_name;
}

/*
    This program demonstrates the use of cin.getline() in C++.

    INPUT HANDLING (getline):
    - cin.getline() is used to take input from the user as a full line.
    - It can read spaces between words.
    - It stops reading when the user presses Enter (\n).

    HOW IT WORKS:
    - The input is stored in the character array full_name.
    - It reads up to 529 characters (to avoid buffer overflow).
    - The last character is reserved for the null terminator '\0'.

    WHY getline IS USED:
    - Unlike cin >>, it does NOT stop at spaces.
    - It is useful for reading full names, addresses, sentences, etc.

    OUTPUT:
    - The program prints the entered full name using cout.
*/