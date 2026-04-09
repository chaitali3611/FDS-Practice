#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp;
    int i, j, min, n;

    printf("Enter a string: ");
    gets(str);

    n = strlen(str);

    // Selection Sort
    for(i = 0; i < n-1; i++)
    {
        min = i;
        for(j = i+1; j < n; j++)
        {
            if(str[j] < str[min])
            {
                min = j;
            }
        }

        if(min != i)
        {
            temp = str[i];
            str[i] = str[min];
            str[min] = temp;
        }
    }

    printf("Sorted string (Selection Sort): %s", str);
    return 0;
}