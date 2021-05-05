// Write a program which accepts names, rolls and marks of 10 students in 6 subjects and stores it in an array of structures. Write a separate function which prints in ascending order the rank list (roll, name, average) based on the average of 6 subjects.

#include<stdio.h>
#include<string.h>

#define NUMBER 10

void printRank();

struct StudentData {
    char name[50];
    int roll;
    float maths;
    float electrical;
    float electronics;
    float cpnm;
    float ed;
    float physics;
    float avg;
};

struct StudentData Student[NUMBER];
struct StudentData temp;

int main() {
    int i;

    for(i=1; i<=NUMBER; i++){
        printf("\n Enter name of student-%d: ", i);
        scanf("%s", Student[i].name);
        printf("\n Enter roll of student-%d: ", i);
        scanf("%d", &Student[i].roll);
        printf("\n Enter marks in Mathematics of student-%d: ", i);
        scanf("%f", &Student[i].maths);
        printf("\n Enter marks in Electrical Engineering of student-%d: ", i);
        scanf("%f", &Student[i].electrical);
        printf("\n Enter marks in Electronics of student-%d: ", i);
        scanf("%f", &Student[i].electronics);
        printf("\n Enter marks in Engineering Drawing of student-%d: ", i);
        scanf("%f", &Student[i].ed);
        printf("\n Enter marks in Physics of student-%d: ", i);
        scanf("%f", &Student[i].physics);
        printf("\n Enter marks in Programming of student-%d: ", i);
        scanf("%f", &Student[i].cpnm);

        Student[i].avg = (float) (Student[i].maths + Student[i].electrical + Student[i].electronics + Student[i].cpnm + Student[i].physics + Student[i].ed) / 6;
    }

    printRank();

    return 0;
}

void printRank(){
    int i, j;
    
    for(i=1; i<=NUMBER; i++){
        for(j=1; j<NUMBER; j++){
            if(Student[j].avg < Student[j+1].avg){
                temp = Student[j];
                Student[j] = Student[j+1];
                Student[j+1] = temp;
            }
        }
    }

    printf("\n Rank list: ");
    printf("\n Name \t Roll \tAverage ");

    for(i=1; i<=NUMBER; i++){
        printf("\n %s \t %d \t %.2f", Student[i].name, Student[i].roll, Student[i].avg);
    }
}