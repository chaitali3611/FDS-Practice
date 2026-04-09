#include <stdio.h>
#include <string.h>

int main()
{
    char str[10][50], temp[50];
    int n, i, j, min;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    // 🔽 Selection Sort for strings
    for(i = 0; i < n - 1; i++)
    {
        min = i;
        for(j = i + 1; j < n; j++)
        {
            if(strcmp(str[j], str[min]) < 0)
            {
                min = j;
            }
        }

        if(min != i)
        {
            strcpy(temp, str[i]);
            strcpy(str[i], str[min]);
            strcpy(str[min], temp);
        }
    }

    printf("Sorted strings (Selection Sort):\n");
    for(i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}