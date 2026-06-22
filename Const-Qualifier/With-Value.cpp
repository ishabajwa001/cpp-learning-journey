#include <iostream>
using namespace std;

int main(){

    //Take radius as input
    float radius{0};
    cout<<"Enter the radius : ";
    cin>>radius;

    //Calculate Area
    float area{3.14f * radius * radius};
    cout<<"Area : "<<area<<endl;

    //Calculte Circumference
    float circumference{3.14f * 2 * radius};
    cout<<"Circumference : "<<circumference<<endl;

    return 0;
}

/*
    If we do NOT use const:

    1. The value can be accidentally changed later in the program.
       Example: pi = 0;  // This will silently break all calculations.

    2. It becomes unclear whether a variable is meant to stay fixed
       or is expected to change.
       This makes code harder to read and maintain.

    3. In larger programs, accidental modifications can introduce
       bugs that are difficult to trace.

    4. The compiler cannot protect you from logical mistakes
       because the variable is treated as mutable.

    Benefits of using const:

    1. Prevents accidental modification of values.
       The compiler enforces immutability.

    2. Clearly communicates intent:
       "This value should not change."

    3. Improves code safety and reliability.

    4. Makes debugging easier because constants stay predictable.

    5. Helps the compiler optimize code in some cases.

    In short:
    const turns a "maybe changeable value" into a "locked rule".
*/