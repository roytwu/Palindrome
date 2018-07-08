//File name: palindrome.c
//Author: Roy T Wu

#include <stdio.h>
#include <string.h>
#include "palindrome.h"

//Determine if a string/word is a palindrome
bool isPalindrome(char str[])
{
	//if the string is single char, not a palindrome
	if(strlen(str) == 1) {return false;}

	int leftm = 0; //left most of str
	int rightm = strlen(str)-1; //right most of str

	//if there is upper case in the string, turn it to lower case
	for(int i=0; i<strlen(str); i++){
		if(str[i]>64 && str[i]<91){
			str[i]=str[i]+32;
		}
	}

	
	while(leftm < rightm)
	{
		if(str[leftm++] != str[rightm--]){
			//printf("%s is not palindrome\n", str);
			return false;
		}
	}
	//printf("%s is palindrome\n", str);
	return true;
}



//Given a sentence, tell how many palindromes in that sentence
//isPalindrome() is called in this function
int numOfPalindrome(char str[]) 
{
	char *p_token;
	char *p_delimiter = " ,.-~:!";
	int i = 0;
	int count = 0;
	int boo;

	//split string(a sentence) to tokes(individual words)
	p_token = strtok(str, p_delimiter);
	
	while(p_token != NULL)
	{
		boo = isPalindrome(p_token);
		printf("%s: %d\n", p_token, boo);

		if(boo == 1){
			count++;	
		}

		p_token = strtok(NULL, p_delimiter);
		i++;
	}
	return count;
}