#include <iostream>

void doSomething()
{
    using namespace std;

    #ifdef LIKE_APPLE
        cout << "Apple" << endl;
    #endif

    #ifndef LIKE_APPLE
        cout << "Orange" << endl;
    #endif

}