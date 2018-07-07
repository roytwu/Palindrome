//File name: main.c
//Author: Roy T Wu
//This is the driver program for palindrome.cpp

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "palindrome.h"

int main(){
	bool boo;
	char str1[] = "Noon";
	boo = isPalindrome(str1);
	printf("-'Noon' %s a palindrome\n", boo ? "is" : "is NOT");

	boo = isPalindrome("power");
	printf("-'power' %s a palindrome\n", boo ? "is" : "is NOT");
	printf("\n");


	//count the number of palindromes in the sentence
	char strA[] = "Anna, the eagle eye, will leave at noon !";
	int num =numOfPalindrome(strA);
	printf("\nNumber of palindrome: %d\n", num);


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
