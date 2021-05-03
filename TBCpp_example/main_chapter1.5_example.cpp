#include <iostream> //preprocessor directive
#include <cstdio> //printf

using namespace std;

void print()
{
    cout << "Hello" << endl;
}

void printHelloWorld(void)
{
    cout << "Hello wordl" << endl;
}

int addTwoNumbers(int num_a, int num_b)
{
    int sum = num_a + num_b;
    print();

    return sum;
}


int main(void)
{

    int y=1;
    int x=1;
    cout << "Before your input, y was" << y << endl;
    cout << "Before your input, x was" << x << endl;

    cin >> y;
    cin >> x;

    cout << "changed x+y is "  << addTwoNumbers(x,y) << endl;

    printHelloWorld();

    return 0;
}