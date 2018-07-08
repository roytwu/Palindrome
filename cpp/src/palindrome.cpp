

#include <iterator> //ostream_iterator
#include "palindrome.h"


void Tokenize(const string& str, vector<string>& tokens, const string& delimiters = " ")
{
    // Skip delimiters at beginning.
    string::size_type lastPos = str.find_first_not_of(delimiters, 0);
    // Find first "non-delimiter".
    string::size_type pos     = str.find_first_of(delimiters, lastPos);

    while (string::npos != pos || string::npos != lastPos)
    {
        // Found a token, add it to the vector.
        tokens.push_back(str.substr(lastPos, pos - lastPos));
        // Skip delimiters.  Note the "not_of"
        lastPos = str.find_first_not_of(delimiters, pos);
        // Find next "non-delimiter"
        pos = str.find_first_of(delimiters, lastPos);
    }
}


//Determine if a string/word is a palindrome
bool isPalindrome(string word)
{
	//if the string is single char, not a palindrome
	if(word.length() == 1) {return false;}

	int leftm = 0; //left most of str
	int rightm = word.length()-1; //right most of str

	//if there is upper case in the string, turn it to lower case
	for(unsigned int i=0; i<word.length(); i++){
		if(word[i]>64 && word[i]<91){
			word[i]=word[i]+32;
		}
	}

	while(leftm < rightm)
	{
		if(word[leftm++] != word[rightm--]){
			//cout << word << "is not palindrome" << endl;
			return false;
		}
	}
	//cout << word << "is palindrome" << endl;
	return true;
}


//Given a sentence, tell how many palindromes in that sentence
int numOfPalindrome(string sentence) 
{
	vector<string> tokens;
	Tokenize(sentence, tokens, " ,.-~:!");
	//copy(tokens.begin(), tokens.end(), ostream_iterator<string>(cout, ", "));

	int count =0;
	for (unsigned int i=0; i<tokens.size(); i++){
		if( isPalindrome(tokens[i]) )
			count++;
	}

	return count;
}