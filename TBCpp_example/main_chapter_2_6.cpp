//[2.6] Boolean datatype and conditional statement if.

#include <iostream> //preprocessor directive

// The Boolean data type has two possible values:true(1) and false(0).


using namespace std;



bool isEqual(int x, int y)  // A function written with a boolean type as a return type.
{
    bool result = (x == y); // True if A and B are equal.

    return result;
}



int main(void)
{
    bool b1 = true;  // copy initialization
    bool b2(false);  // direct initialization
    bool b3{ true }; // uniform initialization
    b3 = false;

    cout << std::boolalpha;         // Boolalpha changes the output value of boolean type to true and false instead of 1 and 0.
    cout << b3 << endl;
    cout << b1 << endl;

    cout << std::noboolalpha;       // noboolalpha is inverse of boolalpha
    cout << b3 << endl;
    cout << b1 << endl;

    // ! is not operator that express inverse value
    cout << !b3 << endl;
    cout << !b1 << endl;
    cout << !true << endl;
    cout << !false << endl;

    //////////////////////////////////////////// Logical operator ///////////////////////////////////////////////
    //  Logical operator have two value(A and B) and Both A and B are considered and treated as one boolean.   //
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    // And operator (A && B) - If A and B true output are true, the result is true
    
    cout << std::boolalpha; 
    cout << (true  && true) << endl;        //true 
    cout << (true  && false) << endl;       //false
    cout << (false && true) << endl;        //false
    cout << (false && false) << endl;       //false


    // Or operator (A || B) - If either A or B is true,the result is true.

    cout << (true  || true) << endl;        //true 
    cout << (true  || false) << endl;       //true
    cout << (false || true) << endl;        //true
    cout << (false || false) << endl;       //false

    ////////////////////////////////////////// If statement  /////////////////////////////////////////////////////

    if (false)
        cout << "This is true" << endl;
    else
        cout << "This is false" << endl;


    if (3 > 1)
    {
        cout << "This is true" << endl;
        cout << "True second line" << endl;
    }
    else
        cout << "This is false" << endl;


    if (5)      // If the value in () of the if-statement is 0, it is false, and all values other than 0 are true.
    {
        cout << "True" << endl;
    }
    else
        cout << "False" << endl;
    

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////



    cout << std::boolalpha;
    cout << isEqual(1,1) << endl;
    cout << isEqual(0,3) << endl;

    // Get input(cin) a boolean value.
    bool c;

    cin >> c;
    //cout << std::boolalpha;
    cout << "your input:" << c << endl;




    return 0;
}