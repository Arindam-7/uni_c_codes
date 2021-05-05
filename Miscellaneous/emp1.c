#include <stdio.h> ///for input output functions like printf, scanf
#include <stdlib.h>
#include <conio.h>
#include <windows.h> ///for windows related functions (not important)
#include <string.h>  ///string operations


/** Main function started */

int main()
{
    FILE *fp, *ft; /// file pointers
    char another, choice;

    /** structure that represents an employee(name, age and salary) */
    struct emp
    {
        char name[40]; ///name of employee
        int age; /// age of employee
        float bs; /// basic salary of employee
    };

    struct emp e; /// structure variable creation

    char empname[40]; /// string to store name of the employee

    long int recsize; /// size of each record of employee

    /** open the file in binary read and write mode
    * if the file EMP.DAT already exists then it open that file in read write mode
    * if the file doesn't exist it simply creates a new copy
    */
    fp = fopen("EMP.DAT","rb+"); // file opens in binary read and write mode
    if(fp == NULL)
    {
        fp = fopen("EMP.DAT","wb+"); //if the file doesn't exist, file gets created
        if(fp == NULL)
        {
            printf("Connot open file"); 
            exit(1); // if file fails to get created, the operation exits
        }
    }

    /// sizeo of each record i.e. size of structure variable e
    recsize = sizeof(e);

    /// infinite loop continues until the break statement encounter
    while(1)
    {
        system("cls"); ///clear the console window
        printf("1. Add Record\n"); /// option for add record
        printf("2. List Records\n"); /// option for showing existing record
        printf("3. Modify Records\n"); /// option for editing record
        printf("4. Delete Records\n"); /// option for deleting record
        printf("5. Search Records\n"); /// option for searching within the program
        printf("6. Exit\n"); // option for exiting the current operation
        printf("Your Choice: "); /// enter the choice 1, 2, 3, 4, 5 & 6
        fflush(stdin); /// flush the input buffer
        choice  = getche(); /// get the input from user's keyboard

        // operations for each of the six options
        switch(choice)
        {
        case '1':  /// if user presses 1
            system("cls"); // clears the output screen
            fseek(fp,0,SEEK_END); /// search the file and move cursor to end of the file
            /// here 0 indicates moving 0 distance from the end of the file

            another = 'y';
            while(another == 'y')  /// if user want to add another record
            {
                printf("\nEnter name: "); // prints the name that was inserted
                scanf("%s",e.name); // scans the inserted name
                printf("\nEnter age: "); // prints the age that was inserted
                scanf("%d", &e.age); // scans the inserted age
                printf("\nEnter basic salary: "); // // prints the basic salary that was inserted
                scanf("%f", &e.bs); // scans the inserted basic salary

                fwrite(&e,recsize,1,fp); /// write the record in the file

                printf("\nAdd another record(y/n) "); // prompt asking if user wants to add more records or not
                fflush(stdin); // flushes the input buffer
                another = getche(); // if user inserts more records, gets the input from keyboard
            }
            break; // terminates the first statement sequence
        case '2': // if user presses 2
            system("cls"); // clears the output screen
            rewind(fp); ///this moves file cursor to start of the file
            while(fread(&e,recsize,1,fp)==1)  /// read the file and fetch the record one record per fetch
            {
                printf("\n%s %d %.2f",e.name,e.age,e.bs); /// print the name, age and basic salary
            }
            getch(); // holds the output screen until user inputs 
            break; // terminates the second statement sequence

        case '3': // if user press 3 then do editing existing record
            system("cls"); // clears the output screen
            another = 'y';
            while(another == 'y') // if user wants to add another record
            {
                printf("\nEnter the employee name to modify: "); // prints the modified name
                scanf("%s", empname); // scans the inserted name
                rewind(fp); // move record to starting of file
                while(fread(&e,recsize,1,fp)==1)  /// fetch all record from file
                {
                    if(strcmp(e.name,empname) == 0)  ///if entered name matches with that in file
                    {
                        printf("\nEnter new name,age and bs: "); // prints the output to insert name, age and basic salary
                        scanf("%s%d%f",e.name,&e.age,&e.bs); // scan the inserted name, age and basic salary
                        fseek(fp,-recsize,SEEK_CUR); /// move the cursor 1 step back from current position
                        fwrite(&e,recsize,1,fp); /// override the record
                        break; // terminates the statement
                    }
                }
                printf("\nModify another record(y/n)"); // prompt asking if user wants to modify more records or not
                fflush(stdin); // flush the input buffer
                another = getche(); // if user inserts more records, gets the input from keyboard
            }
            break; // terminates the third statement sequence
        case '4': // if user presses 4 to delete record
            system("cls"); // clears output screen
            another = 'y';
            while(another == 'y') // if user wants to delete another record
            {
                printf("\nEnter name of employee to delete: "); // prints the name of employee to be deleted
                scanf("%s",empname); // scans the inserted name
                ft = fopen("Temp.dat","wb");  /// create a intermediate file for temporary storage
                rewind(fp); /// move record to starting of file
                while(fread(&e,recsize,1,fp) == 1)  /// read all records from file
                {
                    if(strcmp(e.name,empname) != 0)  /// if the entered record not match
                    {
                        fwrite(&e,recsize,1,ft); /// move all records except the one that is to be deleted to temp file
                    }
                }
                fclose(fp); // closes the file that is being pointed by file pointer fp
                fclose(ft); // closes the file that is being pointed by file pointer ft
                remove("EMP.DAT"); /// remove the orginal file
                rename("Temp.dat","EMP.DAT"); /// rename the temp file to original file name
                fp = fopen("EMP.DAT", "rb+"); // opens EMP.DAT file in binary read write mode
                printf("Delete another record(y/n)"); // prompt asking if user wants to add more records or not
                fflush(stdin); // flush the input buffer
                another = getche(); // if user inserts more records, gets the input from keyboard
            }
            break; // terminates the fourth statement sequence
        case '5': // if user presses 5 in order to search within the records
            system("cls"); // clears the output screen
            another = 'y';
            while(another == 'y') .// if user wants to search for another record
            {
                printf("\nEnter name of employee to search: "); // prints the name of employee to be searched through keyboard
                scanf("%s",empname); // scans the inserted name
                rewind(fp); /// move record to starting of file
                while(fread(&e,recsize,1,fp) == 1)  /// read all records from file
                {
                    if(strcmp(e.name,empname) == 0)  /// if the entered record match
                    {
                        printf("\n%s %d %.2f\n",e.name,e.age,e.bs); /// print the name, age and basic salary
                    }
                }
                printf("search another record(y/n)"); // prompt asking if user wants to search for another record or not
                fflush(stdin); // flush the input buffer
                another = getche(); // if user searches for more records, gets the input from keyboard
            }
            break; // terminates the fifth statement sequence
        case '6': // if user presses 6 in order to exit the operation
            fclose(fp);  /// close the file
            exit(0); /// exit from the program
        }
    }
    return 0; // returns success status
}
