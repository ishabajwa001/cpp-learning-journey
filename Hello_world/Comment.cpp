#include<iostream>          //iostream library containes cin and cout
using namespace std;       /*it is used to avoid using std::cout in every statement*/
int main()                //main function
{
int a = 10 ,b =5,c=4;
//this is the single line comment

    /* Multiline comment
    //Single-line comments can exist inside it
    */


// #if 0 ... #endif is a preprocessor block that disables code before compilation
#if 0
/* Block contains multiline comments, so nested comments are not allowed */
    cout<<a<<endl;
    cout<<b<<endl;
#endif

//only c variable survives here and will be printed out
cout<<c<<endl;
return 0;
}