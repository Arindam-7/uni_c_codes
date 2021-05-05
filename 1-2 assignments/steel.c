// Question 6 -  A certain grade of steel is graded according to the following conditions:
// Hardness must be greater than 50
// Carbon content must be less than 0.7
// Tensile strength must be greater than 5600
// The grades are as follows:
// Grade is 10 if all three conditions are met
// Grade is 9 if conditions (i) and (ii) are met
// Grade is 8 if conditions (ii) and (iii) are met
// Grade is 7 if conditions (i) and (iii) are met
// Grade is 6 if only one condition is met
// Grade is 5 if none of the conditions are met
// Write a program

#include<stdio.h>

int main() {
    float hardness, carbon, ts;
    printf("\n Enter the Hardness of graded steel: \n");
    scanf("%f", &hardness);
    printf("\n Enter the Carbon Content of graded steel: \n");
    scanf("%f", &carbon);
    printf("\n Enter the Tensile Strength of graded steel: \n");
    scanf("%f", &ts);

    // calculation

    if (hardness > 50 && carbon < 0.7 && ts > 5600){
        printf("\n Grade of the steel is 10. \n");
    } else if (hardness > 50 && carbon < 0.7 && ts <= 5600){
        printf("\n Grade of the steel is 9. \n");
    } else if (hardness <= 50 && carbon < 0.7 && ts > 5600){
        printf("\n Grade of the steel is 8. \n");
    } else if (hardness > 50 && carbon >= 0.7 && ts > 5600){
        printf("\n Grade of the steel is 7. \n");
    } else if (hardness > 50 && carbon >= 0.7 && ts <= 5600 
            || hardness <= 50 && carbon >= 0.7 && ts > 5600
            || hardness <= 50 && carbon < 0.7 && ts <= 5600
    ) {
        printf("\n Grade of the steel is 6. \n");
    } else if(hardness <= 50 && carbon >= 0.7 && ts <= 5600){
        printf("\n Grade of the steel is 5. \n");
    }

    return 0;
}