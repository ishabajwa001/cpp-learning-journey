#include <iostream>
using namespace std;

int main(){

    char character;
    cout<<"Enter a Character : ";
    cin>>character;

    switch(character){
        case 'A':
            cout<<"Apple"<<endl;
            break;
        case 'B':
            cout<<"Bitcoin"<<endl;
            break;
        case 'C':
            cout<<"Camera"<<endl;
            break;
        case 'D':
            cout<<"Dog"<<endl;
            break;
        case 'E':
            cout<<"Eggs"<<endl;
            break;
        case 'F':
            cout<<"Fighter Jet"<<endl;
            break;
        case 'G':
            cout<<"Gaming PC"<<endl;
            break;
        case 'H':
            cout<<"House"<<endl;
            break;
        case 'I':
            cout<<"Ice Cream"<<endl;
            break;
        case 'J':
            cout<<"Jelly"<<endl;
            break;
        case 'K':
            cout<<"Key to Treasure "<<endl;
            break;
        case 'L':
            cout<<"Lion"<<endl;
            break;
        case 'M':
            cout<<"Mango"<<endl;
            break;
        case 'N':
            cout<<"Netflix Subscription"<<endl;
            break;
        case 'O':
            cout<<"Ostrich"<<endl;
            break;
        case 'P':
            cout<<"Perfume"<<endl;
            break;
        case 'Q':
            cout<<"Quail"<<endl;
            break;
        case 'R':
            cout<<"Rest"<<endl;
            break;
        case 'S':
            cout<<"Snail that can chase you"<<endl;
            break;
        case 'T':
            cout<<"Trip to South"<<endl;
            break;
        case 'U':
            cout<<"Umbrella"<<endl;
            break;
        case 'V':
            cout<<"Vase full of flowers "<<endl;
            break;
        case 'W':
            cout<<"Water"<<endl;
            break;
        case 'X':
            cout<<"Xylophone"<<endl;
            break;
        case 'Y':
            cout<<"Yatch"<<endl;
            break;
        case 'Z':
            cout<<"Zoo Visit"<<endl;
            break;
        default:
            cout<<"Well you might not need anything."<<endl;
    }

    return 0;
}