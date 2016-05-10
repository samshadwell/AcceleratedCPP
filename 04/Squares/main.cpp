// solution to 4-2 and 4-3
#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::setw;
using std::streamsize;
using std::vector;

int main()
{
    vector<int> input;
    
    // Read in all the integers
    int max = 0, x;
    while (cin >> x) {
        max = std::max(x, max);
        input.push_back(x);
    }
    
    // get the number of digits in the largest number
    int num_digits = 1;
    while ((max /= 10) != 0) {
        ++num_digits;
    }
    
    // write out the integers and their squares
    for (vector<int>::size_type i = 0; i != input.size(); ++i) {
        int num = input[i];
        cout << setw(num_digits) << num << '\t' << num * num << endl;
    }
}