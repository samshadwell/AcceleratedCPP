// solution to 2-8
#include <iostream>

int main()
{
    const int start_range = 1;
    const int end_range = 10;
    
    int product = 1;
    for (int i = start_range; i != end_range; ++i)
        product *= i;
        
    std::cout << "Product of numbers in the range [";
    std::cout <<  start_range;
    std::cout << ",";
    std::cout << end_range;
    std::cout << "): ";
    std::cout << product << std::endl;
    
    return 0;
}