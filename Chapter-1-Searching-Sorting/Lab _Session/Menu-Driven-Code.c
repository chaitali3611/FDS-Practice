#include<stdio.h>
#include<string.h>
struct student
{
    int rn;     //roll no
    char name[10];
};

int main()
{
    struct student s[10];
    
    int i, a, choice, count;

    printf("\nEnter the number of students: ");
    scanf("%d", &count);
    printf("\nEnter the %d student Information: ", count);
    for(i=0; i<count; i++)
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
                int pos;
                printf("\nEnter position for insertion (1 to %d): ", i+1);
                scanf("%d", &pos);

                if(pos >= 1 && pos <= count+1)
                {
                    for(i = count; i >= pos; i--)
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

                int roll, j;
                int flag = 0;
                printf("\nEnter roll number for deletion: ");
                scanf("%d", &roll);

                for(i = 0; i<10; i++)
                {
                    if(roll == s[i].rn)
                    {
                        for(j=i; j< count; j++)
                        {
                            s[i] = s[i+1];
                            count--;
                        }
                        printf("\nStudent deleted successfully.");
                        flag = 1;
                    }
                }

                if(flag == 0)
                {
                    printf("\nInvalid roll number.");
                }
                break;
            }

            case 3:
            {
                printf("\nIt's Updation.");
                int roll;
                int flag = 0;
                printf("\nEnter roll no. for updation: ");
                scanf("%d", &roll);

                for(i=0; i<10; i++)
                {
                    if(roll == s[i].rn)
                    {
                        printf("\nEnter new roll no.: ");
                        scanf("%d", &s[i].rn);
                        printf("\nEnter new name: ");
                        scanf("%s", s[i].name);
                        printf("\nStudent updated successfully.");
                        flag = 1;
                    }
                }

                if(flag == 0)
                {
                    printf("\nInvalid roll no.");
                }
                break;
            }

            case 4:
            {
                printf("\nIt's Display.");

                for(i=0; i<count; i++)
                {
                printf("\nName of the %d student is: %s ",i+1, s[i].name);
                printf("\nRoll no. of the %d student is: %d",i+1, s[i].rn);
                }
                break;
            }

            case 5:
            {
                printf("\nIt's Exit.");
                break;
            }
        }

        printf("\nWhether you want to continue(1/0): ");
        scanf("%d", &a);
    } while(a == 1);
    return 0;
    
}