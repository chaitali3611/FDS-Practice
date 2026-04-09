#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp;
    int i, j, n;

    printf("Enter a string: ");
    gets(str);

    n = strlen(str);

    // Bubble Sort
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(str[j] > str[j+1])
            {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }

    printf("Sorted string (Bubble Sort): %s", str);
    return 0;
}