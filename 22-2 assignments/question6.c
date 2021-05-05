// Write a C program which accepts a string from user and checks whether it is palindrome or not. Do not use any string library function. [Example of a palindrome string: "abcba", "abba", "TENET"]

#include<stdio.h>

int main()
{
	char c[100];
	int n=0,i;
	printf("Enter the string \n");
	scanf("%s",c);
	
	while(c[n]!='\0'){
		n++;
	}
	
	int l=0,h=n-1;
	while(h>l)
	{
		if(c[l]!=c[h])
		{
		printf("Not Palindrome");
		return 0;
		}
		h--;
		l++;
	}
	 printf("Palindrome");

	return 0;	
}