#include <iostream>
using namespace std;

int main(){

    //Take number as user input
    int num;
    cout<<"Enter a Number : ";
    cin>>num;

    // Check if number is positive or negative
    if(num >= 0) {
        cout<<"The Number is Postive"<<endl;
    }
    else {
        cout<<"The Number is Negative"<<endl;
    }
    
    return 0;
}