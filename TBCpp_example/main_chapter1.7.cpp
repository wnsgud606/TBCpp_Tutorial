#include <iostream> //preprocessor directive
#include <cstdio> //printf

using namespace std;
           

int main(void)
{
    int x= 0;

    cout << x << " " << &x << endl; // [&x prints the address of x] 
    
    
    {
        int x = 1;

        cout << x << " " << &x << endl; // this x is local variable, so it is deleted when it escape from {}-area.
                                        // Additionally, The memory used for local variable is returned to stack memory and waits for next local variable.


    }

    {
        int x = 2;

    }



    return 0;
}