// solution to problem 2-3
#include <iostream>
#include <string>

// say what standard-library names we use
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    // ask for the person's name
    cout << "Please enter your first name: ";
    
    // read the name
    string name;
    cin >> name;
    
    // build the message that we intend to write
    const string greeting = "Hello, " + name + "!";
    
    // the number of blanks above and below the greeting
    const int vert_pad = 1;
    
    // the number of blanks to the left and right of the greeting
    const int horiz_pad = 10;
    
    // the number of rows and the number of columns to write
    const int rows = vert_pad * 2 + 3;
    const string::size_type cols = greeting.size() + horiz_pad * 2 + 2;
    
    // write a blank line to separate the output from the input
    cout << endl;
    
    // write 'rows' rows of input
    // invariant: we have written r rows so far
    for (int r = 0; r != rows; ++r) {
        
        string::size_type c = 0;
        
        // invariant: we have written c characters so far in the current rows
        while (c != cols) {
            
            // is it time to write the greeting?
            if (r == vert_pad + 1 && c == horiz_pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else {
                
                // are we on the border?
                if (r == 0 || r == rows - 1 ||
                    c == 0 || c == cols - 1)
                    cout << "*";
                else
                    cout << " ";
                ++c;
            }
        }
        
        cout << endl;
    }
    
    return 0;
}