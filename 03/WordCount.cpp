// solution to 3-3
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    // prompt user to input a bunch of strings
    cout << "Please enter a bunch of words followed by end-of-line: ";
    
    // read all the words into the vectors
    typedef vector<string>::size_type vec_sz;
    
    vector<string> words;
    vector<int> counts;
    string x;
    while(cin >> x) {
        // search for the word to see if we've already seen it
        int found = -1;
        for (vec_sz i = 0; i < words.size(); ++i) {
            if (words[i] == x) {
                found = i;
            }
        }
        
        // if we haven't seen this word before, add it to our vector
        if (found == -1) {
            words.push_back(x);
            counts.push_back(1);
        // if we have, just increment the word's count
        } else {
            ++counts[found];
        }
    }
    
    // print the words and their counts
    for (vec_sz i = 0; i < words.size(); ++i) {
        cout << "Word: " << words[i] << ", count: " << counts[i] << endl;
    }
    
    return 0;
}