//Question 3- Given three points (x1, y1), (x2, y2) and (x3, y3), 
// write a program to check if all the three points fall on one straight line.

#include<stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    float areaOfTriangle;
    printf("\n Enter the value of x1 & y1: \n");
    scanf("%d %d", &x1, &y1);
    printf("\n Enter the value of x2 & y2: \n");
    scanf("%d %d", &x2, &y2);
    printf("\n Enter the value of x3 & y3: \n");
    scanf("%d %d", &x3, &y3);

    areaOfTriangle = (float) 0.5 * (x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));

    if (areaOfTriangle == 0) {
        printf("\n The points are collinear. \n");
    } else {
        printf("\n The points are not collinear. \n");
    }
    
    return 0;
}