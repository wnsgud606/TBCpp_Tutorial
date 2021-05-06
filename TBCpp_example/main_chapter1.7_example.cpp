#include <iostream> //preprocessor directive
#include <cstdio> //printf

using namespace std;

void doSomething(int x)
{
    x = 123;
    cout << x << endl;
}
           

int main(void)
{
    int x= 0;

    cout << x << " " << &x << endl; // [&x prints the address of x]
    doSomething(x);
    cout << x << endl;


    return 0;
}