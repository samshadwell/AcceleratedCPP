#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::istream;
using std::string;
using std::endl;
using std::vector;

istream& read_words(istream& is, vector<string>& words)
{
    // make sure we can read from input stream
    if (is) {
        // clear the vector and read the words
        words.clear();
        string x;
        while (is >> x)
            words.push_back(x);
            
        // let next read be allowed
        is.clear();
    }
    return is;
}

int main()
{
    vector<string> words;
    
    // Total number of words input
    read_words(cin, words);
    cout << "Number of words: " << words.size() << endl;
    
    // Determine the count of each word
    string prev = "";
    int prev_count = 0;
    
    std::sort(words.begin(), words.end());
    for (vector<string>::size_type i = 0; i != words.size(); ++i) {
        if (prev != words[i]) {
            if (prev != "")
                cout << prev << ": " << prev_count << endl;
            prev = words[i];
            prev_count = 1;
        } else {
            ++prev_count;
        }
    }
}