#include<stdio.h>
#include<stdlib.h>

int main(){
    int id;
    char name[50];
    float marks;
    char grade;
    int i;
    int count = 0;
    int choice, found, searchid;

    main_menu:

    printf("\n========================================================\n");
    printf("STUDENT GRADE AND RESULT MANAGEMENT SYSTEM\n");
    printf("\n========================================================\n");
    printf("1. ENTER STUDENT RECORD\n");
    printf("2. DISPLAY STUDENT RECORD \n");
    printf("3. ENTER ID TO SEARCH\n");
    printf("4. ENTER ID TO DELETE\n ");
    printf("5. EXIT\n");
    printf("-----------------------------------------------------------\n");
    printf("Enter choice code(1-5) = ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        printf("\nENTER STUDENT RECORD\n");
        printf("Enter student id = ");
        scanf("%d",&id);

        printf("Enter student name = ");
              scanf("%s", &name);

              printf("Enter student marks = ");
              scanf("%f", &marks);

        if(marks > 90 ){
            grade = 'A';
           

        }
        else if(marks > 80 && marks < 90){
            grade = 'B';
           
        }
        else if(marks > 70 && marks < 80){
            grade = 'C';
          
        }
        else if(marks > 60 && marks < 70){
            grade = 'D';
            
        }
        else{
            grade = 'E';
           
        }

        printf("\n----STUDENT RECORD SAVED!----\n");
        goto main_menu;

        case 2:
        printf("\n======STUDENT RECORD=======\n");
        printf("%-10s %-20s %-10s %-10s\n", "ID", "Name", "Marks", "Grade");
        printf("---------------------------------------------------\n");
        printf("%-10d %-20s %-10.f %-10c\n", id, name, marks, grade);
        goto main_menu;

        case 3:
        printf("Enter id to search = ");
        scanf("%d", &searchid);

        if(id == searchid){
            printf("\n======STUDENT FOUND!=====\n");
            printf("ID = %d\n", id);
            printf("NAME = %s\n", name);
            printf("MARKS = %f\n", marks);
            printf("GRADE = %c\n", grade);
        }
        else{
            printf("Records not found!");
           
        }
        goto main_menu;

        case 4:
        printf("ENTER ID TO DELETE = ");
        scanf("%d", &id);

        if(id == searchid){
            printf("---DELETING ID......");
        }
        goto main_menu;



    }
    return 0;






}