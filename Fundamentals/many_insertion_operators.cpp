#include <iostream>
using namespace std;

int main(){
    cout<<"Hello World\n"<<4<<" "<<'A'<<" "<<6.75f<<endl;
}

/*
    This program demonstrates that multiple insertion operators (<<)
    can be used in a single cout statement.

    Different data types can be displayed together:
    - String: "Hello World"
    - Integer: 4
    - Character: 'A'
    - Float: 6.75f

    The << operator inserts each value into the output stream
    from left to right, allowing multiple values to be printed
    in one line of code.
*/