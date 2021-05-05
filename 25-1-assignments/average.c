/* Question 1 - Accept three integer numbers 
and find their average. Next display 
which numbers are below and 
above the average value. */

#include<stdio.h>

int main(){
    int a, b, c;
    float avg;  
    printf("\n Enter three integers: \n");
    scanf("%d %d %d", &a, &b, &c);

    // calculation
    avg = (float) (a+b+c)/3;

    // result
    if(a > avg){
        printf("\n %d is above average \n", a);
    } else if (a < avg) {
        printf("\n %d is below average \n", a);
    } else {
        printf("\n %d equals to average \n", a);
    }

    if(b > avg){
        printf("\n %d is above average \n", b);
    } else if (b < avg) {
        printf("\n %d is below average \n", b);
    } else {
        printf("\n %d equals to average \n", b);
    }

    if(c > avg){
        printf("\n %d is above average \n", c);
    } else if (c < avg) {
        printf("\n %d is below average \n", c);
    } else {
        printf("\n %d equals to average \n", c);
    }
    
    return 0;
}

