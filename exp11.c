#include<stdio.h>

struct student
{ 
    int stno;
    char stname[10];
    int num;
    int salary;
};

int main()
{
    struct student s[60];
    int i, n;

    printf("enter no of employees= ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        printf("enter employee no =\n");
        scanf("%d", &s[i].stno);
        printf("enter employee name:\n");
        scanf("%s", s[i].stname);
        printf("enter salary =\n");
        scanf("%d", &s[i].salary);
    }
    
    for (i = 0; i < n; i++)
    {
        printf("%d %s %d\n", s[i].stno, s[i].stname, s[i].salary);
    }

    return 0;
}