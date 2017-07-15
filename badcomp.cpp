/*
    I think I coded this as a cleaner way or c++ way of doing something not so great on /r/learnprogramming
*/

// Bad compression of string
// Still it uses c++ style code rather than c so that's a plus
#include <iostream>
#include <string>
#include <sstream>

std::string compress(const std::string & str) {

    // Current char iter
    auto cur = str.begin();
    
    // Store our compressed string
    std::ostringstream comp;
    
    // While we have another char to compress
    while(cur != str.end()) {
        
        // Index of next char
        auto next = str.find_first_not_of(*cur, std::distance(str.begin(), cur));
        
        // iter to end of this run of same chars
        auto end = (next == std::string::npos ? str.end() : str.begin() + next);
        
        // Write current char and number found to comp
        comp << *cur << std::distance(cur, end);
        
        // Set current char to next char
        cur = end;
    }

    return comp.str();
}

int main()
{
    std::cin << compress(std::string("aaabbccccdaa")) << std::endl;
    std::cout << compress(std::string("")) << std::endl;
}
