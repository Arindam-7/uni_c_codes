#include<stdio.h>

int main() {
    int n, count, i, j, flag;

    printf("Enter number of primes to be printed: ");
    scanf("%d", &n);

    count = 1;
    i = 2;

    while (count <= n){
        flag = 0;

        for(j=2; j<=i/2; j++){
            if (i%j == 0){
                flag = 1;
                break;
            }
        }

        if (flag == 0){
            printf("%d\n", i);
            count++;
        }

        i++;
    }
    return 0;
}