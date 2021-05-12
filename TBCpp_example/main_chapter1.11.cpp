//[1.11] Create a header file 

#include <iostream> //preprocessor directive
#include <cstdio> //printf
#include "header/1_11_calc2.h"
// If the location of the folder storing the header file is changed, main.cpp doesn't recognize the header.
// To solve this problem, 
// we need to change the preprocessor in main.cpp to a form containing the changed location of the header file based on the working folder.

using namespace std;

int main(void)
{
    cout << add(3,2) << endl; // peek definition , peek declaration, peek reference
    cout << multiply(3,4) << endl;
    cout << subtract(5,6) << endl;

    return 0;
}