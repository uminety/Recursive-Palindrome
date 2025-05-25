// This is an academic exercise about recursive functions
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
	
bool tester (char* left, char* right);
bool palindrome(char* s);

int main(int argc, char* argv[]){
	if (argc == 1){
		printf("Supply your word as an argument\n");
		return 0;
	}
	char* s = argv[1]; 
	bool flag; //result of the word evaluation - yes - no;
	flag = palindrome(s);
	if(flag == true){
		printf("It's a palindrome\n");
	}
	else{
		printf("It's not a palindrome\n");
	}
	return 0;
}
bool tester (char* left, char* right){
	//check 1st and last char of string
	if(left >= right){
		return true;
	}
	if(*left != *right){
		return false;
	}
	return tester(left+1 ,right-1);
}

bool palindrome(char* s){
	int length = strlen(s);
	if(length == 0){
		return true;
	}
	return tester(s, s+length-1);
}

