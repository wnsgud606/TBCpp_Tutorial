//[2.4] Void type

#include <iostream> //preprocessor directive
#include <cstdint>


using namespace std;

void my_function()
{
    
}


int main(void)
{
    //void my_void;  // Since the Void type does not take up memory, it can't be declared as a variable.
    int i = 123;
    float f =123.456f

    void *my_void;
    my_void = (void*)&i; // If you put & in front of a variable, it means the address of that variable.
    my_void = (void*)&f;

    //////////////////////////////////////////////////////////////////////////////////////
    //  Even if the data type is different and the size of the data type is different,  //
    //  the amount of data expressing the address of the data is the same               //
    //////////////////////////////////////////////////////////////////////////////////////
    return 0;
}