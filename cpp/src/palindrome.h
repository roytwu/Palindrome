//File name: palindrome.h (headfile of palindrome.cpp)
//Author: Roy T Wu

#ifndef PALINDROME_H_
#define PALINDROME_H_

#include <string>
#include <vector>
using std::string;
using std::vector;

void Tokenize(const string&, vector<string>&, const string&);
bool isPalindrome(string word);
int  numOfPalindrome(string sentence);


#endif //PALINDROME_H_

/*Note*/
//When passing by value, a copy of the object being passed is made. 
//When passing by reference, a reference to the existing object is made (there is no copy)