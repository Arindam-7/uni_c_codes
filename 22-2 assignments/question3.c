// Write a recursive function which returns the sum of individual digits of a number passed as argument.

#include<stdio.h>

int sum_num(int n)
{
    if (n == 0) {
        return 0;
    }
    return (n % 10 + sum_num(n / 10));
}

int main()
{
	int n, sum = 0;
	printf("Enter the number: ");
	scanf("%d",&n);
	sum = sum_num(n);
    printf("The sum of digit of number is: %d", sum);
	return 0;
}