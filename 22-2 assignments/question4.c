// Write a C program which accepts a string from user and counts the number of characters in the string and prints the reverse of the string without using string library functions.

#include<stdio.h>
#include<string.h>

int main()
{
	char c[100],r[100];
	int i=0, j;                                                                       
	printf("Enter the string: ");
	gets(c);
	while(c[i]!='\0'){
		i++;
	}
	
	printf("Number of character in the string is: %d \n",i);
	
	printf("The String in reverse is: \n ");
	for(j=i-1;j>=0;j--){
		printf("%c",c[j]);	
	}
	return 0;
}