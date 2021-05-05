// Question 1 - Any year is input through the keyboard. 
// Write a program to determine whether the year is a leap year or not.

#include<stdio.h>

int main() {
    int year;
    printf("\n Enter year: \n");
    scanf("%d", &year);

    // calculation

    if (year % 4 != 0) {
        printf("\n %d is not leap year. \n", year); 
    } else {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("\n %d is leap year. \n", year);
            } else {
                printf("\n %d is not leap year. \n", year);
            }
        } else {
            printf("\n %d is leap year. \n", year);
        }
    }

    return 0;
}