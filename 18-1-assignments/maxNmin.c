// Question number - 6

#include<stdio.h>

int main() {
    int a, b, c;
    printf("Enter 1st number: \n");
    scanf("%d", &a);
    printf("Enter 2nd number: \n");
    scanf("%d", &b);
    printf("Enter 3rd number: \n");
    scanf("%d", &c);

    // calculation for max number
    if (a >= b && a >= c) {
        printf("\n %d is maximum \n", a);
    }
    else if (b >= c && b >= a) {
        printf("\n %d is maximum \n", b);
    }
    else if (c >= a && c >= b) {
        printf("\n %d is maximum \n", c);
    }

    // calculation for min number
    if (a <= b && a <= c) {
        printf("\n %d is minimum \n", a);
    }
    else if (b <= c && b <= a) {
        printf("\n %d is minimum \n", b);
    }
    else if (c <= b && c <= a) {
        printf("\n %d is minimum \n", c);
    }

    return 0;
}