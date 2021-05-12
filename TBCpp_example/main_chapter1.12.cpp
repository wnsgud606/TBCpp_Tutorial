//[1.12] Linking error and Header Guards

#include <iostream> //preprocessor directive
#include <cstdio> //printf
#include "header/1_12_doSomething.h"
#include "header/1_12_add.h"
// Bulid errors don't occur because #include duplicates are prevented by header guards.
// #include duplicates makes build error

using namespace std;

int main(void)
{
    doSomething();

    return 0;
}