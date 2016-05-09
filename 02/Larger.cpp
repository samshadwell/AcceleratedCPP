// solution to 2-9
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // prompt user
    cout << "Please enter two numbers separated by a space: ";
    
    // get the two numbers
    int first, second;
    cin >> first;
    cin >> second;
    
    // print the larger of the two numbers
    cout << "The larger number is: ";
    if (first > second)
        cout << first << endl;
    else
        cout << second << endl;
        
    return 0;
}