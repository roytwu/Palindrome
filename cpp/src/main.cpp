//File name: main.cpp, driver program for palindrome.cpp
//Author: Roy T Wu

//Tokenize: http://oopweb.com/CPP/Documents/CPPHOWTO/Volume/C++Programming-HOWTO-7.html


#include <iostream>
#include <string>
#include <iterator> //ostream_iterator
#include "palindrome.h"

using std::cout;
using std::endl;
using std::string;


int main(){

	string strA = "Anna, the eagle eye, will leave at noon !";
	cout << "Number of palindrome: " << numOfPalindrome(strA) << endl;

	return 0;
}

