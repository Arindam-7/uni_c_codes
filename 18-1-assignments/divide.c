/*
    Question number 5 - 
    Input two integer numbers and divide 
    the larger number by the smaller one. 
    Then display the result using printf() 
    function as a fractional number first 
    and then as a real valued number. 
    (Example: 9 divided by 5 shall yield 
    “9/5” and “1.8” respectively. )
*/

#include<stdio.h>

int main() {
    float division;
    int a, b;
    printf("Enter a: \n");
    scanf("%d", &a);
    printf("Enter b: \n");
    scanf("%d", &b);

    // calculation
    if (a > b || a == b) {
        division = (float) a / b;
        printf("Real valued division: %d/%d \n", a, b);
        printf("Fractional division: %.2f \n", division); 
    } else {
        division = (float) b / a;
        printf("Real valued division: %d/%d \n", b, a);
        printf("Fractional division: %.2f \n", division);
    }

    return 0;
}
