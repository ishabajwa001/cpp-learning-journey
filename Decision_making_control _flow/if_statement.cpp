#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    //Check if person is eligible to vote or not
    if (age < 18) {
        cout<<"You are not eligible to vote "<<endl;
    }

    if(age >= 18){
        cout<<"You can vote "<<endl;
    }
    return 0;
}