#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 1; i < n; i++)
    {
        int curr = a[i];
        int pos;

        for(pos = 0; pos < i; pos++)
        {
            if(a[pos] > curr)
                break;
        }

        for(int j = i; j > pos; j--)
        {
            a[j] = a[j-1];
        }

        a[pos] = curr;
    }

    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}