// solution to 2-4
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
    
    // the number of blanks surrounding the greeting
    const int pad = 2;
    
    // the number of rows and the number of columns to write
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;
    
    // write a blank line to separate the output from the input
    cout << endl;
    
    // write 'rows' rows of input
    // invariant: we have written r rows so far
    for (int r = 0; r != rows; ++r) {
        
        string::size_type c = 0;
        
        // invariant: we have written c characters so far in the current rows
        while (c != cols) {
            
            // is it time to write the greeting?
            if (r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            // are we on the border?
            } else if (r == 0 || r == rows - 1 ||
                       c == 0 || c == cols - 1) {
                cout << "*";
                ++c;
            } else {
                string::size_type n;
                // Are we writing a lot of spaces?
                if (r != pad + 1)
                    n = greeting.size() + 2 * pad;
                // or just one?
                else
                    n = 1;
                    
                cout << string(n, ' ');
                c += n;
            }
        }
        
        cout << endl;
    }
    
    return 0;
}