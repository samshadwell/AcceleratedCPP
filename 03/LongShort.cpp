// solution to 3-4
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    // prompt user for strings
    cout << "Please enter strings you want to find the shortest/longest of: ";
    
    // now read the strings and keep track of shortest and longest
    string shortest, longest, x;
    cin >> shortest;
    longest = shortest;
    while (cin >> x) {
        if (x.size() < shortest.size())
            shortest = x;
        if (x.size() > longest.size())
            longest = x;
    }
    
    // print the results
    cout << "Shortest string: " << shortest << endl;
    cout << "Longest string: " << longest << endl;
    
    return 0;
}