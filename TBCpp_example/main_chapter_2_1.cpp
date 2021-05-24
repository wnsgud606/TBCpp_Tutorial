//[2.1] Fundametal Data Types

#include <iostream> //preprocessor directive


//--------------------------------------------------------------------//
//A signed int can be a negative integer,0,or a positive integer.     //
// A unsigned int can be 0 or a positivee integer.                    //
//--------------------------------------------------------------------//



int main(void)
{
    using namespace std;

    bool bValue1 = true;
    bool bValue2 = false;

    char chValue1 = 'A';
    char chValue2 = 65;

    float fValue = 3.141592f;
    double dValue = 3.141592;


    // The datatype of auto is determined at compile time.
    auto aValue0 = 3.141592f; // The datatype of aValue0 is float.
    auto aValue1 = 3.141592;  // The datatype of aValue1 is double. 
    auto aValue2 = 5;         // The datatype of aValue2 is int.
    auto aValue3 = 'a';       // The datatype of aValue3 is char.

    cout << bValue1 << endl;
    cout << bValue2 << endl;
    cout << (bValue1 ? 1 : 0) << endl;

    cout << chValue1 << endl;
    cout << (int)chValue1 << endl;

    cout << chValue2 << endl; //Internally, letters are also represented by numbers
    cout << (int)chValue2 << endl;

    cout << fValue << endl;
    cout << dValue << endl;

    cout << aValue1 << endl;
    cout << aValue2 << endl;
    cout << aValue3 << endl;

    //The function sizeof gives the size of a variable or datatype.
    cout << sizeof(aValue0) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(aValue1) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(aValue2) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(aValue3) << endl;
    cout << sizeof(char) << endl;


    //Initialization method of variables
    int z = 123;        //copy initialization
    int z(123);         //direct initialization
    int b{123};         //uniform initialization


    //Delcare multiple variables
    int k,l = 12 ,m = 123;
    int e = 1 , f(111), g{123};






    return 0;
}