//[1.14] Preprocessor : Defines the entry point for the console application.

#include <iostream> //preprocessor directive
//#include <cstdio> //printf
//#include <algorithm>
#define MY_NUMBER "Hello world"
#define MY_NUMBER1 1
#define MY_NUMBER2 5
#define MY_NUMBER3 9 // Macro name is usually capitalized
                     // The function_1 of the macro(#define) is to change Ex[MY_NUMBER3] as Ex[9]
#define Max(a,b) (((a)>(b)) ? (a) : (b))
////////////////////////////////////////////////////////////////////////////////////////
#define LIKE_APPLE //The Function_2 of the macro. It is used for conditional compilation.

using namespace std;

void doSomething();

int main(void)
{
    cout << MY_NUMBER << endl;
    cout << MY_NUMBER1 << endl;
    cout << MY_NUMBER2 << endl;
    cout << MY_NUMBER3 << endl;
    cout << Max(1+5,2) << endl;
    cout << std::max(1+5,2) << endl;

    //#ifdef LIKE_APPLE
    //    cout << "Apple" << endl;
    //#endif

    //#ifndef LIKE_APPLE
    //    cout << "Orange" << endl;
    //#endif

    doSomething();

    return 0;
}