#include<stdio.h>

int main(){
    int s1, s2, s3, s4, s5; // integer variables for storing marks of each students
    float average; // float variable for storing the average value
    

    // takes marks as input from keyboard
    printf("Enter the marks of Student-1: \n");
    scanf("%d", &s1);
    printf("Enter the marks of Student-2: \n");
    scanf("%d", &s2);
    printf("Enter the marks of Student-3: \n");
    scanf("%d", &s3);
    printf("Enter the marks of Student-4: \n");
    scanf("%d", &s4);
    printf("Enter the marks of Student-5: \n");
    scanf("%d", &s5);

    // calculation 
    average = (float) (s1+s2+s3+s4+s5)/5;


    if (average <= 50){
        printf("\n Class has failed. \n");  // executes this if average is less than or equal to 50
    } else if (average > 50) {  
        printf("\n Class has passed. \n");  // executes this if average is greater than 50
    }

    return 0; 
}