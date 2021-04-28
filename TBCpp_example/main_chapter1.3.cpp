#include <iostream> //preprocessor directive

int main(void)
{
    //int x=0; // x=0 is initialization, x=0 is equal x(0)

    //x= 123; // = -> assignment operator
    // L-value(x) = R-value(123)

    //std::cout << x << std::endl;
    //std::cout << &x << std::endl; // & = ampersand

    int x = 1;
    x = x +2;
    std::cout << x << std::endl; // #1

    int y = x;
    std::cout << y << std::endl; // #2


    //is (x+y) l-value or r-value?
    std::cout << x+y << std::endl; //#3

    std::cout << x << std::endl; //#4

    int z;
    std::cout << z << std::endl; //#5
    

    return 0;
}