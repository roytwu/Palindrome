//File name: longestPalinSubstr.h
//Author: Roy T Wu
//Given a string, find the longest substring which is palindrome

#include <string.h> //memset
#include <stdbool.h> //bool
#include "longestPalinSubstr.h"

int findLonestPalin(char *str){
	int max_length = 1;
	int start = 0;
	int len = strlen(str);

	bool table[len][len];
	memset(table, 0, sizeof(table));

	for(int i=0; i<len; i++){
		table[i][i] = true;
	}

	for(int i=0; i<len-1; i++){
		if(str[i] == str[i+1]){
			table[i][i+1] = true;
			start = i;
			max_length = 2;
		}
	}

	for(int k=3; k<=len; k++){
		for(int i=0; i<(len-k+1); i++){
			int j = (i+k-1);

			if(table[i+1][j-1] && str[i] == str[j]){
				table[i][j] = true;

				if(k>max_length){
					start = i;
					max_length = k;
				}
			}
		}
	}

	return max_length;
}