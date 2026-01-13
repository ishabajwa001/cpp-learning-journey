// Preprocessor directive: includes input-output stream library
#include<iostream> 

// Main function: returns an integer to the operating system
int main()       
{
    //Body of the Program

    // std::cout sends output to the console
    // << is the insertion operator used to send data to the output stream
    // Strings must be written inside double quotation marks
    // \n is a newline escape sequence
    // A semicolon ; ends a statement 
    std::cout<<"Hello world!"<<"\n";

    // \n can be written inside the text or as a separate string
    // Both approaches work the same
    // Remember: \ is called a backslash
    std::cout<<"This is my very first C++ program.\n";

    // std::endl also moves to a new line and flushes the output buffer
    std::cout<<"Here In my program I written everything I have learnt as comments and code." <<std::endl;
    std::cout<<"In the programming journey C++ is my first programming langauge";

    // Printing a newline separately
    std::cout<<std::endl;

    // Returning 0 indicates successful program execution
    return 0;
}
/*
                                  Difference between \n and endl
Example
\n

Teacher writes a sentence, then drops to the next line.
Class might not be looking yet.
Writing continues quietly.

std::endl

Teacher writes a sentence, stops, taps the board, waits until everyone looks.
Then continues on the next line.

That tap is the flush.

Lock-it-in rule (memorize this)

\n → new line only

std::endl → new line + force output */


// you are probably wondering why sometext is not executed here these are comments
// conments are used so a programmer can remember why he used this
// Also these are helpful when others see code and wants to understand what this code does