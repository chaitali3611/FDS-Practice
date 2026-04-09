#include <stdio.h>
#include <string.h>

int main()
{
    char str[10][50], key[50], temp[50];
    int n, i, j;
    int low = 0, high, mid, found = 0;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    // 🔽 Sorting strings (Bubble Sort)
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(strcmp(str[j], str[j+1]) > 0)
            {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j+1]);
                strcpy(str[j+1], temp);
            }
        }
    }

    printf("Sorted strings:\n");
    for(i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }

    printf("Enter string to search: ");
    scanf("%s", key);

    high = n - 1;

    // 🔍 Binary Search
    while(low <= high)
    {
        mid = (low + high) / 2;

        if(strcmp(str[mid], key) == 0)
        {
            printf("String found at position %d", mid + 1);
            found = 1;
            break;
        }
        else if(strcmp(key, str[mid]) > 0)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 0)
        printf("String not found");

    return 0;
}