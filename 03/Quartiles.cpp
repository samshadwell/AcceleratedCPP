// solution to 3-2
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::string;
using std::vector;

int main()
{
    // Prompt for the set of numbers
    cout << "Please enter a set of numbers followed by end-of-line: ";
    
    // Read in the numbers
    vector<double> set;
    double x;
    while(cin >> x)
        set.push_back(x);
        
    // make sure we have at least 2 elements
    typedef vector<double>::size_type vec_sz;
    vec_sz size = set.size();
    if (size < 2) {
        cout << endl << "You must enter at least 2 grades. Please try again."
             << endl;
        return 1;
    }
        
    // sort the set
    sort(set.begin(), set.end());
    
    // compute the median
    vec_sz mid = size / 2;
    vec_sz lo_end, hi_start;
    double median;
    if (size % 2 == 0) {
        median = set[mid] + set[mid-1] / 2;
        lo_end = mid;
        hi_start = mid; 
    } else {
        median = set[mid];
        lo_end = mid;
        hi_start = mid + 1;
    }
    
    cout << "lo_end: " << lo_end << endl;
    cout << "hi_start: " << hi_start << endl;
                           
    // now compute the quartiles
    double q1, q3;
    
    vec_sz q1Mid = lo_end / 2;
    if (lo_end % 2 == 0) {
        q1 = (set[q1Mid] + set[q1Mid-1]) / 2;
    } else {
        q1 = set[q1Mid];
    }
    
    vec_sz q3Mid = (size - hi_start) / 2 + hi_start;
    if ((size - hi_start) % 2 == 0) {
        q3 = (set[q3Mid] + set[q3Mid-1]) / 2;
    } else {
        q3 = set[q3Mid];
    }
    
    cout << "Q1: " << q1 << " Q2: " << median << " Q3: " << q3 << endl;
    
    return 0;
}