// solution to 2-5
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    // write the square
    const unsigned int sq_length = 5;
    for (int i = 0; i != sq_length; ++i)
        cout << string(sq_length, '*') << endl;
    cout << endl;
    
    // write the rectangle
    const unsigned int rct_length = 3;
    const unsigned int rct_width = 8;
    for (int i = 0; i != rct_length; ++i)
        cout << string(rct_width, '*') << endl;
    cout << endl;
    
    // write the triangle
    const unsigned int tri_length = 10;
    for (int i = 0; i != tri_length; i++)
        cout << string(i, '*') << endl;

    return 0;
}