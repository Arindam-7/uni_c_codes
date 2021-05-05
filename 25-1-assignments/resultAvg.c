/* Question 5:- If the marks obtained by a 
student in five different subjects are input 
through the keyboard, find out the aggregate 
marks and percentage marks obtained by the student. 
Assume that the maximum marks that can be 
obtained by a student in each subject is 100. 
Input error should be checked. */

#include<stdio.h>

int main(){
    float math, electrical, electronics, programming, ed;
    float sum, avg, percentage;
    int total = 500;
    printf("\n What's your marks in Math?: ");
    scanf("%f", &math);
    printf("\n What's your marks in Electrical?: ");
    scanf("%f", &electrical);
    printf("\n What's your marks in Electronics?: ");
    scanf("%f", &electronics);
    printf("\n What's your marks in Programming?: ");
    scanf("%f", &programming);
    printf("\n What's your marks in Engineering Drawing?: ");
    scanf("%f", &ed);

    // calculation
    sum = math+electronics+electrical+programming+ed;
    avg = sum/5;
    percentage = (sum/total)*100;


    if (math <= 100 && electrical <= 100 && electronics <= 100 && programming <=100 && ed <= 100){
        printf("\n Aggregate marks: %.2f", avg);
        printf("\n Percentage: %.2f %%", percentage);
    } else {
        printf("\n Max marks in one sub is 100. \n");
    }

    return 0;
}