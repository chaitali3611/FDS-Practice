#include<stdio.h>
struct student
{
    int rn;     //roll no
    char name;
};

int main()
{
    struct student s[10];
    
    int i, pos, n, a, choice;

    printf("\nEnter the number of students: ");
    scanf("%d", &n);
    printf("\nEnter the student Information: ");
    for(i=0; i<n; i++)
    {
        printf("\nEnter the %d Student name: ", i+1);
        scanf("%s", &s[i].name);
        printf("\nEnter the %d Student roll number: ", i+1);
        scanf("%d", &s[i].rn);
    }

    do
    {
        printf("\n----Menu----");
        printf("\n1.Insertion");
        printf("\n2.Deletion");
        printf("\n3.Updation");
        printf("\n4.Display");
        printf("\n5.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                printf("\nIt's Insertion.");
                printf("\nEnter position for insertion (0-9): ");
                scanf("%d", &pos);

                if(pos >= 1 && pos < 10)
                {
                    for(i = count; i > pos; i--)
                    {
                        s[i] = s[i-1];
                        printf("\nEnter roll no: ");
                        scanf("%d", &s[i].rn);
                        printf("\nEnter name: ");
                        scanf("%s", s[i].name);
                        printf("\nStudent inserted successfully.");

                        count++;
                    }
                }

                else
                {
                    printf("\nInvalid position.");
                }
                
                break;
            }

            case 2:
            {
                printf("\nIt's Deletion.");

                int roll;
                printf("\nEnter roll number for deletion: ");
                scanf("%d", &roll);

                for(i = 0; i<count; i++)
                {
                    if(roll == s[i].rn)
                    {
                        for(j=i; j< count; j++)
                        {
                            s[i] = s[i+1];
                            count++;

                            printf("\nStudent deleted successfully.");
                        }
                    }

                    else
                    {
                        printf("\nInvalid roll number.");
                    }
                }
                break;
            }

            case 3:
            printf("\nIt's Updation.");
            break;

            case 4:
            printf("\nIt's Display.");

            for(i=0; i<n; i++)
            {
            printf("\n%s", s[i].name);
            printf("\n%d", s[i].rn);
            }
            break;
        }

        printf("\nWhether you want to continue(1/0): ");
        scanf("%d", &a);
    } while(a == 1);
    return 0;
    
}