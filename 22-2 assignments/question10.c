// Write a recursive C function which returns the length of a string passed as an argument.

#include<stdio.h>

int strlength(char* c)
{
	if(*c=='\0')	
	return 0;
	
	else return 1+strlength(c+1);
}

int main()
{
	char c[100];
    int len = 0;
	printf("Enter the string: ");
	gets(c);
	len = strlength(c);

	printf("The length of the string is: %d",len);
		
	return 0;
}