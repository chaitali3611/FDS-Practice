#include<stdio.h>
struct student
{
    int rn;     //roll no
    char name;
};

int main()
{
    struct student s[10];
    
    int i, pos, n;

    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("\nEnter the student Information: ");
    for(i=0; i<n; i++)
    {
        printf("Enter the %d Student name", i+1);
        scanf("%s", &s[i].name);
        printf("Enter the %d Student roll number", i+1);
        scanf("%d", &s[i].rn);
    }

    do
    {
        printf("----Menu----");
        printf("\n1.Insertion");
        printf("\n2.Deletion");
        printf("\n3.Updation");
        printf("\n4.Display");
        printf("\n5.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        printf("")
    } while(a == 1);
    
}