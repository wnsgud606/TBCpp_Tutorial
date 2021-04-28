#include <iostream> //preprocessor directive
#include <cstdio> //printf

int main(void)
{
    using namespace std; // [Inside main(void){}, std can be omitted]

    //int x = 1024;
    //double pi = 3.141592;

    //cout << "x is"<< x << "pi is" << pi << endl;
    //cout << "Hello TBCpp \n" << endl; // [<< : output operator]  [\n functions as enter]
    //cout << "abc" << "\t" << "def" << endl; // [\t functions as a line alignmented tap]
    //cout:: "\a"; // [\a output a sound]

    int y=1;
    cout << "Before your input, y was" << y << endl;

    cin >> y;  // [>> : input operator]  \

    cout << "your input is" << y << endl;

    return 0;
}