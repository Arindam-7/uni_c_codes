// Question 4 - Given as input an integer number of seconds, 
// write a program to print as output the equivalent time in hours,
//  minutes and seconds. Recommended output format is something like 
//  7322 seconds is equivalent to 2 hours 2 minutes 2 seconds.

#include<stdio.h>

int main(){
    int seconds, minutes, hours;
    printf("\n Enter seconds: \n");
    scanf("%d", &seconds);

    // calculation
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = (seconds % 3600) % 60;

    printf("\n %d hours %d minutes %d seconds \n", hours, minutes, seconds);

    return 0;
}