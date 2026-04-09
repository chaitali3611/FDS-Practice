#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], key, temp;
    int i, j;
    int low = 0, high, mid, found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // 🔽 Sorting the string (Bubble Sort)
    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = 0; str[j+1] != '\0'; j++)
        {
            if(str[j] > str[j+1])
            {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }

    printf("Sorted string: %s\n", str);

    printf("Enter character to search: ");
    scanf(" %c", &key);

    high = strlen(str) - 1;

    // 🔍 Binary Search
    while(low <= high)
    {
        mid = (low + high) / 2;

        if(str[mid] == key)
        {
            printf("Character '%c' found at position %d", key, mid + 1);
            found = 1;
            break;
        }
        else if(key > str[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 0)
        printf("Character not found");

    return 0;
}