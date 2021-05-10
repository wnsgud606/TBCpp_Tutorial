//[1.10] Separation of Declaration and Definition

#include <iostream> //preprocessor directive
#include <cstdio> //printf

using namespace std;

//[Forward declaration], [Prototype]
int add(int a, int b);
int multiply(int a, int b);
int subtract(int a, int b);

int main(void)
{
    cout << add(1,2) << endl; // peek definition , peek declaration, peek reference
    cout << multiply(3,4) << endl;
    cout << subtract(5,6) << endl;

    return 0;
}


// definition
int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int subtract(int a, int b)
{
    return a - b;
}

