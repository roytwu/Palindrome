//File name: 
//Author: Roy T Wu
//Goal: Given a sentence, tell how many palindromes in that sentence

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Determine if a string(word) is a palindrome
void isPalindrome(char str[])
{
	int leftm = 0; //left most of str
	int rightm = strlen(str)-1; //right most of str

	while(leftm < rightm)
	{
		if(str[leftm++] != str[rightm--]){
			printf("%s is not palindrome\n", str);
			return;
		}
	}
	printf("%s is palindrome\n", str);
}

//split one sentence to individual words
char * strSplit(char str[]) 
{
	char *p_token;
	char *p_delimiter = " ,.-";
	char *p_rtn[50];
	int i = 0;

	p_token = strtok(str, p_delimiter);
	
	while(p_token != NULL)
	{
		printf("%s\n", p_token);
		//p_rtn[i] = malloc(40*sizeof(char));
		p_rtn[i] = p_token;
		p_token = strtok(NULL, p_delimiter);
		i++;
	}

	return p_rtn;
}


int main(){

	isPalindrome("noon");
	isPalindrome("power");

	char strA[] = "This is a, sample string.";
	strSplit(strA);

	// printf("%s", strSplit(strA));


	return 0;
}