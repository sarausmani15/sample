#include <stdio.h>

struct student_record {
    char name[50];
    int roll_number;
    float total_marks;
};

int main() {
    struct student_record students[5];
    int i, topper_index = 0;

    
    printf("--- Enter Details for 5 Students ---\n\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);

        printf("  Enter Name: ");
        scanf(" %[^\n]", students[i].name); // Reads full name including spaces

        printf("  Enter Roll Number: ");
        scanf("%d", &students[i].roll_number);

        printf("  Enter Total Marks: ");
        scanf("%f", &students[i].total_marks);

        printf("\n");
    }

  
    for (i = 1; i < 5; i++) {
        if (students[i].total_marks > students[topper_index].total_marks) {
            topper_index = i;
        }
    }

  
    printf("====================================\n");
    printf("            TOPPER DETAILS          \n");
    printf("====================================\n");
    printf("Name        : %s\n", students[topper_index].name);
    printf("Roll Number : %d\n", students[topper_index].roll_number);
    printf("Total Marks : %.2f\n", students[topper_index].total_marks);
    printf("====================================\n");

    return 0;
}