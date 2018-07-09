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

	string word1 = "Reviver";
	string word2 = "nostalgia";
	string sentence = "Anna, the eagle eye, will leave at noon !";
	
	bool boo = isPalindrome("Reviver");
	string str = boo ? " is " : " is NOT "; //conditional operator
	cout << word1 << str << "a palindrome" << endl;

	boo = isPalindrome(word2);
	str = boo ? " is " : " is NOT "; //conditional operator
	cout << word2 << str << "a palindrome" << endl;


	cout << "Number of palindrome: " << numOfPalindrome(sentence) << endl;

	return 0;
}


/*Note*/
//conditional operator works like this:  expression ? true_clause : false_clause