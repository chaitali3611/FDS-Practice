#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[30];
};

int main() 
{
    struct student s[6];
    int i, choice, pos;
    int count = 5;

    printf("Enter information of 5 students:\n");
    for(i = 0; i < 5; i++) 
    {
        printf("\nStudent %d ID: ", i + 1);
        scanf("%d", &s[i].id);
        printf("Student %d Name: ", i + 1);
        scanf("%s", s[i].name);
    }

    for(i = 0; i < 10; i++) 
    {

        printf("\n1. Insert Student");
        printf("\n2. Update Student");
        printf("\n3. Delete Student");
        printf("\n4. Display Students");
        
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {

            case 1:   // INSERT
                if(count < 6) 
                {
                    printf("Enter position to insert (1 to %d): ", count + 1);
                    scanf("%d", &pos);
                    if(pos >= 1 && pos <= count + 1) 
                    {
                        for(int j = count; j >= pos; j--) 
                        {
                            s[j] = s[j - 1];
                        }
                        printf("Enter Student ID: ");
                        scanf("%d", &s[pos - 1].id);
                        printf("Enter Student Name: ");
                        scanf("%s", s[pos - 1].name);
                        count++;
                        printf("Student inserted successfully.\n");
                    } 
                    else 
                    {
                        printf("Invalid position.");
                    }
                } 
                else 
                {
                    printf("Array is full. Insert not possible.");
                }
                for(int j = 0; j < count; j++) 
                {
                    printf("ID: %d  Name: %s\n", s[j].id, s[j].name);
                }
                break;

            case 2:   // UPDATE
                printf("Enter position to update (1 to %d): ", count);
                scanf("%d", &pos);
                if(pos >= 1 && pos <= count) 
                {
                    printf("Enter new ID: ");
                    scanf("%d", &s[pos - 1].id);
                    printf("Enter new Name: ");
                    scanf("%s", s[pos - 1].name);
                    printf("Student updated successfully.");
                } 
                else 
                {
                    printf("Invalid position.");
                }
                for(int j = 0; j < count; j++) 
                {
                    printf("ID: %d  Name: %s\n", s[j].id, s[j].name);
                }
                break;

            case 3:   // DELETE
                printf("Enter position to delete (1 to %d): ", count);
                scanf("%d", &pos);
                if(pos >= 1 && pos <= count) 
                {
                    for(int j = pos - 1; j < count - 1; j++) 
                    {
                        s[j] = s[j + 1];
                    }
                    count--;
                    printf("Student deleted successfully.");
                } 
                else 
                {
                    printf("Invalid position.");
                }
                for(int j = 0; j < count; j++) 
                {
                    printf("ID: %d  Name: %s\n", s[j].id, s[j].name);
                }
                break;

            case 4:   // DISPLAY
                printf("\nStudent Records:\n");
                for(int j = 0; j < count; j++) 
                {
                    printf("ID: %d  Name: %s\n", s[j].id, s[j].name);
                }
                break;

            default:
                printf("Invalid choice.");
        }
    }

    return 0;
}
