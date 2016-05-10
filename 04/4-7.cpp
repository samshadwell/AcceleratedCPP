#include <iostream>
#include <stdexcept>
#include <vector>

using std::cin;
using std::cout;
using std::domain_error;
using std::endl;
using std::vector;

// calculate the mean of a vector of doubles
double mean(const vector<double>& vec)
{
    typedef vector<double>::size_type vec_sz;
    
    vec_sz size = vec.size();
    if (size == 0)
        throw domain_error("mean of empty vector");
        
    double total = 0;
    for (vec_sz i = 0; i != size; ++i) {
        total += vec[i];
    }
    
    return total / size;
}

int main()
{
    vector<double> in;
    cout << "Please enter doubles followed EOF: " << endl;
    double x;
    while (cin >> x) {
        in.push_back(x);
    }
    
    cout << endl << "Average of input values: " << mean(in) << endl;
}