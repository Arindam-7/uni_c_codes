/* Question 2 - Temperature of a city in 
Fahrenheit degrees is input through 
the keyboard. Write a program 
to convert this temperature 
into Centigrade degrees. */

#include<stdio.h>

int main(){
    float far, cent;
    printf("\n Enter the temperature of your city in Farenheit: \n");
    scanf("%f", &far);

    // calculation
    cent = 5*(far-32)/9;

    printf("%.2f Farenheit is equal to %.2f Celsius", far, cent);
    return 0;
}