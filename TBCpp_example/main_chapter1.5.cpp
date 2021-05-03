#include <iostream> //preprocessor directive
#include <cstdio> //printf

using namespace std;

void printHelloWorld(void)
{
    cout << "Hello wordl" << endl;
}

int addTwoNumbers(int num_a, int num_b)
{
    int sum = num_a + num_b;

    return sum;
}


int main(void)
{
    //cout << addTwoNumbers(1,2) << endl;
    //cout << addTwoNumbers(3,4) << endl;
    //cout << addTwoNumbers(5,6) << endl;
    printHelloWorld();

    return 0;
}