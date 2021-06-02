//[2.6] Boolean datatype and conditional statement if.

#include <iostream> //preprocessor directive

// The Boolean data type has two possible values:true(1) and false(0).


using namespace std;



bool OddDiscrim(int a) // If a is odd, output is true(1).
{
    bool result = ((a+1)%2 == 0);

    return result;
}



int main(void)
{
    int c;
    cin >> c;
   
    if(OddDiscrim(c) == 1)
    {
        cout << "This is Odd number" << endl;

    }
    else{
        cout << "This is Even number" << endl;
    }



    return 0;
}