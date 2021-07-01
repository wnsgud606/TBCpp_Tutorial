//[2.7] Char

// Inside a computer, everything is expressed as a number.
//
// So how do we represent letters as numbers?
// Also, how can multiple people know which character corresponds to which number?
//
// To solve this, people premised to create something called an ASCII table.


#include <iostream> //preprocessor directive
#include <limits>

using namespace std;



int main(void)
{
     char c1(65);   // c1 = 65; c1{65};
     char c2('A');
     
     //When expressing one alphabet, single quotation(') is used.   (ex) 'A', 'B'                        ------> char
     //When expressing a string, double quotation(") is used.       (ex) "Hello world" "Continuum Robot" ------> string

     cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;
     cout << c1 << c2 << int(c1) << int(c2) << endl;

     // C-style casting
     cout << (char)65 << endl;
     cout << (int)'A' << endl;
     cout << c1 << endl;
     cout << c2 << endl;
     cout <<(int)c1 << endl;
     cout <<(char)c2 << endl;

     // Cpp-style casting
     cout << char(65) << endl;
     cout << int('A') << endl;

     cout << static_cast<char>(65) << endl;
     cout << static_cast<int>('A') << endl;
     cout << static_cast<char>(c1) << endl;
     cout << static_cast<int>(c2) << endl;

     char ch(97);
     cout << ch << endl;
     cout << static_cast<int>(ch) << endl;  // Even if static_cast is used, the value stored in the original variable is not changed.
     cout << ch << endl;



     char c3(65);
     cin >> c3; // If abc is input, only ab is output by the two cins below. 
     cout << c3 << " " << static_cast<int>(c3) << endl;  
     // A char can store one alphabet.
     // What happens if more than one alphabet is entered in the char?
     cin >> c3;
     cout << c3 << " " << static_cast<int>(c3) << endl;  
     // The answer is "The first of the received alphabets is input and the rest is stored in the buffer".
     // The remainder stored in the buffer is sequentially input to the corresponding char when additional char are input.

     cout << sizeof(char) << endl;
     cout << (int)std::numeric_limits<char>::max() << endl;
     cout << (int)std::numeric_limits<char>::lowest() << endl;
     cout << (int)std::numeric_limits<unsigned char>::max() << endl;
     cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;


     char c4(65);
     cout << int('\n') << endl;
     cout << "This is first line \n second line"; // '\n' is an endline command.

     cout << "This is first line" << endl;        // endl is a command with two functions.
     cout << "second line";                       // 1) Print all the contents contained in the buffer of cout to the screen
                                                  // 2) endline
     cout << "This is first line" << flush;       
     cout << "second line";                       // flush prints all the contents contained in the buffer of cout to the scren without an endline.

     return 0;
}