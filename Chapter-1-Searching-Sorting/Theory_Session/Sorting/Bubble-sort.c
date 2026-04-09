#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, n;
    char a[20][50], temp[50];

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
    }

    // Bubble Sort Logic
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(strcmp(a[j], a[j + 1]) > 0)
            {
                strcpy(temp, a[j]);
                strcpy(a[j], a[j + 1]);
                strcpy(a[j + 1], temp);
            }
        }
    }

    printf("\nSorted strings (Bubble Sort):\n");
    for(i = 0; i < n; i++)
    {
        printf("%s\n", a[i]);
    }

    return 0;
}