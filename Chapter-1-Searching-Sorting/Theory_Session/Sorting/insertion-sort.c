#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, pos, n;
    char a[20][50], key[50];   // 2D array for strings

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
    }

    // Insertion Sort Logic
    for(i = 1; i < n; i++)
    {
        strcpy(key, a[i]);   // store current string

        for(pos = 0; pos < i; pos++)
        {
            if(strcmp(a[pos], key) > 0)   // compare strings
            {
                for(j = i; j > pos; j--)
                {
                    strcpy(a[j], a[j - 1]);  // shift right
                }
                strcpy(a[pos], key);  // insert at correct position
                break;
            }
        }
    }

    printf("\nSorted strings are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%s\n", a[i]);
    }

    return 0;
}