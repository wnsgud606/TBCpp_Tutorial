//[2.5] Floating Point Numbers

#include <iostream> //preprocessor directive
#include <cstdint>
#include <limits>
#include <cmath>
#include <iomanip>  // Manipulate input and output


using namespace std;


int main(void)
{
    float f(3.141592f); // 3.14 = 31.4 x 0.1
    double d(3.141592);
    long double ld(3.141592);
    float f2(123456789.0f); // 10 significant digits
    double d0(0.1);
    double d1(1.0);
    double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
    double zero = 0.0;
    double posinf = 5.0 / zero ;
    double neginf = -5.0 / zero;
    double nan = zero /zero;

    //cout << sizeof(float) << endl;
    //cout << sizeof(d) << endl;
    //cout << sizeof(ld) << endl;

    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<long double>::min() << endl;
    cout << "" << endl;
    cout << numeric_limits<float>::lowest() << endl;
    cout << numeric_limits<double>::lowest() << endl;
    cout << numeric_limits<long double>::lowest() << endl;
    cout << "" << endl;
    cout << 3.14 << endl;
    cout << 31.4e-1 << endl;
    cout << 31.4e-2 << endl;
    cout << 31.4e1 << endl;
    cout << 31.4e2 << endl;
    cout << "" << endl;
    cout << 1.0/3.0 << endl;
    cout << std::setprecision(9);  // Since setprecision is a functio that changes the settings afterward, there is no need for endl.
    cout << 1.0/3.0 << endl;       // setprecision is a function that sets the number of decimal places, and the default is 6 decimal places.
    cout << "" << endl;
    cout << f2 << endl;            // It's output data is 123456792 is not 123456789. This is error.
    cout << std::setprecision(17);
    cout << d0 << endl;
    cout << "" << endl;
    cout << setprecision(17);
    cout << d1 << endl;
    cout << d2 << endl;
    cout << "" << endl;
    cout << posinf << "" << std::isnan(posinf) << endl;  // isnan(nan) is a function that determines whether a variable is a number or not.
    cout << neginf << "" << std::isnan(neginf) << endl;  // If output is 1(true) that isn't number, and output is 0(false) that is number.
    cout << nan << "" << std::isnan(nan) << endl;
    cout << 1.0 << "" << std::isnan(1.0) << endl;
    cout << posinf << "" << std::isinf(posinf) << endl;




    return 0;
}


//////////////////////////////////////////////////////////////
//  category  //  Type   //  Minimum size  //  General size //
//////////////////////////////////////////////////////////////
//  Floating  //  float  //  4 Byte        //  4 Byte       //
//  point     //         //                //               //
//            ////////////////////////////////////////////////
//            //  double //  8 Byte        //  8 Byte       //
//            ////////////////////////////////////////////////
//            //  Long   //  8 Byte        //  8, 12 or     //
//            //  double //                //  16 Byte      //
//////////////////////////////////////////////////////////////