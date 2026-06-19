#include <iostream>
using namespace std;

int main(){
    //Takes person age as input
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    //check the user age and print out specific statement
    if(age < 13){
        cout<<"Child"<<endl;
    }
    else if (age >= 1 && age <= 18){
        cout<<"Growing Stage"<<endl;
    }
    else {
        cout<<"Adult";
    }

    return 0;
}