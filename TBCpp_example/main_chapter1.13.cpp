//[1.13] Namespace

#include <iostream> //preprocessor directive
#include <cstdio> //printf

using namespace std;

namespace MYSpace1
{
    namespace InnerSpace
    {
        int my_function()
        {
            return 0;
        }
    }
    
    int doSomething(int a, int b)
    {
        return a + b;
    }

}

namespace MYSpace2
{
    int doSomething(int a, int b)
    {
        return a - b;
    }
}



int main(void)
{
    using namespace MYSpace1;
    using namespace MYSpace1::InnerSpace;

    //cout << doSomething(3,4) << endl;
    cout << MYSpace2::doSomething(3,4) << endl;
    cout << my_function() << endl;
    cout << doSomething(1,2) << endl;

    return 0;
}