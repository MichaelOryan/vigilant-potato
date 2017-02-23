#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <functional>
#include <cctype>

int main()
{
  std::string words;
  std::cout << "Enter possible palindrome: ";
  getline (std::cin, words);
  std::string no_punc;
  std::copy_if(words.begin(), words.end(), std::back_insert_iterator<std::string>(no_punc), [](char c){return !ispunct(c) && !isspace(c);});
    if(std::equal(no_punc.begin(), no_punc.end(), no_punc.rbegin()))
        std::cout << "\"" << words << "\" " << "IS a palindrome" << std::endl;
    else 
       std::cout << "\"" << words << "\" " << "is NOT a palindrome" << std::endl;
}
