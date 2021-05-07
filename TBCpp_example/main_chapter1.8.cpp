#include <iostream> //preprocessor directive
#include <cstdio> //printf

using namespace std;
   

int main(void)
{
    int x = -2; // [x is variable, 2 is a literal], [= is assignment]
    int y = (x>0) ? 1 : 2; // [ternary operator] If (x>0) is true then y=1, and if (x>0) is false then y=2


    cout << 1 + 2 << endl; // [1 and 2 are literal and Operand], [1 + 2 is expression], [+ is operator]
                           // [unary operator : -x], [binary operator : 1 + 2], [ternary operato : Conditional operator]
    cout << y << " " << &y << endl;


    return 0;
}