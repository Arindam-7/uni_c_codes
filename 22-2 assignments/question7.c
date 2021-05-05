// Write a program that reads a line and converts it into all capitals without using any string library function. (input string may also contain capital letters)

#include<stdio.h>

int main()
{	
	int i;
	char c[100];
	printf("Enter the string: ");
	gets(c);
	
	for(i=0; c[i]!='\0'; ++i)
	{
		if(c[i]>='a' && c[i]<='z'){
			c[i]=c[i]-32;
		} 
	}
	
	printf("%s",c);
	
	return 0;
}