// Write a C program which accepts a full name from user prints the initials. Eg.  SRT for Sachin Ramesh Tendulkar.

#include<stdio.h>

int main()
{
	char name[100],c[100];
	int i=1;
	printf("Enter the name : ");
	gets(name);
	printf("The Abbreviation is: ");
	printf("%c",name[0]);
	while(name[i]!='\0')
	{
		if(name[i]==' ')		
		printf("%c",name[i+1]);
		
		i++;
	}	
	return 0;
}