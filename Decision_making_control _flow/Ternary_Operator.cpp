#include <iostream>
using namespace std;

int main(){

    int num1;
    cout<<"Enter the First Number : ";
    cin>>num1;

    int num2;
    cout<<"Enter the Second Number : ";
    cin>>num2;

    //Used trenary operator 
    int max = (num1 > num2)? num1:num2;

    cout<<"The greater value is "<<max<<endl;

    return 0;
}