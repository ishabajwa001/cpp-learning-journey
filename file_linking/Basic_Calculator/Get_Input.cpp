#include <iostream>
#include "Get_Input.h"
using namespace std;

//Get Number as Integer
int getIntegerNumber(){
    int num;
    cout<<"Enter a Number (Integer) : ";
    cin>>num;
    return num;
}

// Takes character as input
char getCharacter(){
    char character;
    cout<<"Enter a Character : ";
    cin>>character;
    return character;
}

// Takes floating point number as input
float getFloatNumber(){
    float num;
    cout<<"Enter a Number (Decimal) : ";
    cin>>num;
    return num;
}
