// solution to 4-4
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <vector>

using std::ceil;
using std::cin;
using std::cout;
using std::endl;
using std::log10;
using std::max;
using std::setprecision;
using std::setw;
using std::streamsize;
using std::vector;

int main()
{
    vector<double> input;
    
    // read all the doubles
    double large = 0, x;
    while (cin >> x) {
        large = max(x, large);
        input.push_back(x);
    }
    
    // get the number of non-decimal digits in the largest number
    double num_digits = ceil(log10(large));
    
    // write out the numbers and their squares
    for (vector<double>::size_type i = 0; i != input.size(); ++i) {
        double num = input[i];
        cout << setw(num_digits + 1) << setprecision(num_digits + 1) << num
             << '\t' << num * num << endl;
    }
}