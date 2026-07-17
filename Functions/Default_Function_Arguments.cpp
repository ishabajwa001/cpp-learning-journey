#include <iostream>
using namespace std;
void CreateWindow(const char* title,int x,int y,int width,int height);

//Create Window function with default arguments
void CreateWindow(const char* title,int x = -1,int y = -1,int width = -1,int height = -1){
    cout<<"Title : "<<title<<endl;
    cout<<"x : "<<x<<endl;
    cout<<"y : "<<y<<endl;
    cout<<"width : "<<width<<endl;
    cout<<"height : "<<height<<endl;
}

int main(){
    //Calling function with all parameters
    CreateWindow("Notepad",150,200,500,600);
    cout<<endl;

    //Calling function with only title parameter
    CreateWindow("Calculator");
    cout<<endl;

    //Calling function with title and x, y parameters
    CreateWindow("Paint",100,200);
    return 0;
}

/*
Concepts Used:

1. Default Function Arguments
   - Default values can be assigned to function parameters.
   - These values are used when the caller does not provide arguments.

2. Optional Arguments
   - x, y, width, and height have default values.
   - The caller can choose to provide all or only some arguments.

3. Left-to-Right Arguments
   - Arguments must be passed from the left side.
   - Default values are used for the remaining parameters.

4. Function Declaration
   - Default arguments are assigned in the function declaration.
   - The compiler automatically uses default values when needed.

5. Main Idea
   - Default arguments make function calls shorter and more convenient.
*/

