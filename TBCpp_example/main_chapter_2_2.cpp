//[2.2] Integers

#include <iostream> //preprocessor directive
#include <cmath>    //pow
#include <limits>   //numeric_limits

using namespace std;

int main(void)
{
    short s = 1; // 2bypes = 2 x 8 bits = 16 bits
    int i = 1;
    long l = 1;
    long long ll = 1;

    cout << sizeof(short) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;

    cout << std::pow(2,sizeof(short) * 8 - 1 ) - 1 << endl;     // In signed data type, the first bit is used for sign expression.
                                                                // that's why first_1 is subtracted.
                                                                // The second_1 is to exclude 0.

    cout << std::numeric_limits<short>::max() << endl;
    cout << std::numeric_limits<short>::min() << endl;
    cout << std::numeric_limits<short>::lowest() << endl;

    s = 32767;
    s = s + 2; //32768?

    cout << s << endl;
    cout << "32768?" << s << endl; //overflow

    cout << 22/4 << endl;
    cout << (float)22/4 << endl;
    cout << 22/(float)4 << endl;
    

    return 0;
}