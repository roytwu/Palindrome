//File name: main.c
//Author: Roy T Wu
//This is the driver program for palindrome.c and longestPalinSubstr.c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "palindrome.h"
#include "longestPalinSubstr.h"

int main(){
	bool boo;
	char word1[] = "Noon";
	char word2[] = "Power";
	char sentence[] = "Anna, the eagle eye, will leave at noon!";
	char str[] = "Fhannahiskaka";

	// boo = isPalindrome("Noon"); //code will crash here
	boo = isPalindrome(word1);
	printf("-'Noon' %s a palindrome\n", boo ? "is" : "is NOT");
	
	boo = isPalindrome("power");
	//boo = isPalindrome(word2);
	printf("-'power' %s a palindrome\n", boo ? "is" : "is NOT");
	printf("\n");


	//count the number of palindromes in a sentence
	int num =numOfPalindrome(sentence);
	printf("\nNumber of palindrome: %d\n", num);


	//----- ----- ----- -----
	printf("\nFind the longest palindrome substring:\n");
	int rtn = findLonestPalin(str);
	printf("%d\n", rtn);


	return 0;
}



// void strSplit(char str[]) 
// {
// 	char *p_token;
// 	char *p_delimiter = " ,.-~:";
// 	int i = 0;
// 	p_token = strtok(str, p_delimiter);	
// 	while(p_token != NULL)
// 	{
// 		printf("%s\n", p_token);
// 		p_token = strtok(NULL, p_delimiter);
// 		i++;
// 	}
// }
