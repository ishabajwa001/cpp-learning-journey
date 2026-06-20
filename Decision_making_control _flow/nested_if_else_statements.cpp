#include <iostream>
using namespace std;

int main(){

    //Takes user input
    int num;
    cout<<"Enter the Number : ";
    cin>>num;

    //Check if number is positive , negative or zero and if positive the check whether number is even or odd
    if(num > 0){
        if(num % 2 == 0){
            cout<<"Positive and Even Number"<<endl;
        }
        else{
            cout<<"Positive and Odd Number"<<endl;
        }
    }
    else if(num == 0){
        cout<<"The Number is Zero"<<endl;
    }
    else{
        cout<<"The Number is Negative"<<endl;
    }

    return 0;
}