//  Create a structure to specify data on students given below:

//               Roll number, Name, Department, Course, Year of joining

//               Assume that there are not more than 100 students in the  college.

// a.       Write a function to print the names of all students who joined  in a particular year.

// b.      Write a function to print the data of a student whose roll number is given.


#include<stdio.h>
#include<string.h>

void yearOfJoining(int, int);
void rollFinder(int, int);

typedef struct StudentData {
    int roll;
    char name[50];
    char department[40];
    char course[40];
    int year;
} Students;

Students Student[100];

int main() {
    int n, i, yoj, rn;

    printf("\n Enter number of students with available data: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        printf("\n Enter Data in the following order: Name, Department, Course, Roll, Year");
        printf("\n Enter the details of Student - %d: ", i);
        scanf("%s %s %s %d %d", Student[i].name, Student[i].department, Student[i].course, &Student[i].roll, &Student[i].year);
    }

    printf("\n Enter the year to find out all the names of students who joined that year: ");
    scanf("%d", &yoj);
    yearOfJoining(yoj, n);

    printf("\n To find details of a certain student, enter the roll number: ");
    scanf("%d", &rn);
    rollFinder(rn, n);

    return 0;
}

void yearOfJoining(int yoj, int n){
    printf("\n Students who joined in the year %d are as follows: ", yoj);

    for(int i=0; i<=n; i++){
        if(Student[i].year == yoj){
            printf("\n %s", Student[i].name);
        }
    }
}

void rollFinder(int rn, int n){
    for(int i=0; i<=n; i++){
        if (Student[i].roll == rn) {
            printf("\n Name: %s", Student[i].name);
            printf("\n Department: %s", Student[i].department);
            printf("\n Course: %s", Student[i].course);
            printf("\n Roll: %d", Student[i].roll);
            printf("\n Year of Joining: %d", Student[i].year);
        }
    }
}