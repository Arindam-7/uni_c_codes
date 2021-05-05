/* Question 3 - Write a C program which 
accepts basic salary as input 
and prints the gross salary, 
which is sum of the basic, 
dearness allowance (60% of basic salary), 
and house rent allowance (15% of basic salary). */

#include<stdio.h>

int main(){
    float basicSalary, grossSalary;
    printf("\n Enter basic salary in Rupees: \n");
    scanf("%f", &basicSalary);

    // calculation
    grossSalary = basicSalary + (0.6 * basicSalary) + (0.15 * basicSalary);

    printf("\n Gross Salary = %.2f /-", grossSalary);

    return 0;
}