// Question number 3

#include<stdio.h>

int main() {
    int num, sum=0;
    printf("Enter a three digit integer: ");
    scanf("%d", &num);

    // calculation
    while (num!= 0){
        sum = sum + (num % 10);
        num = num / 10;
    }

    printf("Sum of digits: %d \n\n", sum);

    return 0;
}