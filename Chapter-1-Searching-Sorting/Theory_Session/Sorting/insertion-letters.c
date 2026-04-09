#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, pos, n;
    char str[100], key;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    // Insertion Sort Logic (same as your code)
    for(i = 1; i < n; i++)
    {
        key = str[i];   // store current character

        for(pos = 0; pos < i; pos++)
        {
            if(str[pos] > key)   // compare characters
            {
                for(j = i; j > pos; j--)
                {
                    str[j] = str[j - 1];  // shift right
                }
                str[pos] = key;  // insert at correct position
                break;
            }
        }
    }

    printf("Sorted string: %s", str);

    return 0;
}