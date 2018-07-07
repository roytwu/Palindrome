//File name: main.c
//Author: Roy T Wu
//This is the driver program for palindrome.cpp

//Goal: Given a sentence, tell how many palindromes in that sentence

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "palindrome.h"

int main(){
	//isPalindrome("noon");
	//isPalindrome("power");

	int num;
	char strA[] = "Anna, the eagle eye, will leave at noon !";
	num =numOfPalindrome(strA);
	printf("Number of palindrome: %d\n", num);


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
