#include<stdio.h>

int main() {
    int number, remainder, reverse = 0;
    printf("\n Enter a number: \n");
    scanf("%d", &number);

    // calculation
    while (number != 0) {
        remainder = number % 10;
        reverse = (reverse * 10) + remainder;
        number = number / 10;
    }

    printf("\n Reverse of %d is %d", number, reverse);

    return 0;
}