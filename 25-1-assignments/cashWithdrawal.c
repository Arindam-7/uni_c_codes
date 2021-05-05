/* Question 4:- A cashier has currency notes 
of denominations 10, 50 and 100. Write a C 
program which accepts an amount to be withdrawn, 
and prints the total number of currency notes 
of each denomination the cashier will have 
to give to the withdrawer. */

#include<stdio.h>
 
int main(){
    int withdrawAmount, hundred, fifty, ten;
    printf("\n Enter the amount to be withdrawn: \n");
    scanf("%d", &withdrawAmount);

    // calculation
    hundred = withdrawAmount / 100;
    fifty = (withdrawAmount % 100) / 50;
    ten = ((withdrawAmount % 100) % 50) / 10;

    // result
    printf("\n Notes of 100 rupees: %d \n", hundred);
    printf("\n Notes of 50 rupees: %d \n", fifty);
    printf("\n Notes of 10 rupees: %d \n", ten);

    return 0;
}