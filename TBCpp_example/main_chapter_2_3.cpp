//[2.3] Fixed-width Integers

#include <iostream> //preprocessor directive
#include <cstdint>


using namespace std;

int main(void)
{
    std::int16_t i(5);              // int16_t converts a variable into an integer 16-bit(2-byte) data.
    std::int8_t myint = 65;

    cout << myint << endl;

    std::int_fast8_t fi(5);         // int_fast8_t means the fastest of the 8-bit data types of integer.
    std::int_least64_t fl(5);       // int_least64_t means an integer datatype of at least 64-bits(8-byte).


    return 0;
}