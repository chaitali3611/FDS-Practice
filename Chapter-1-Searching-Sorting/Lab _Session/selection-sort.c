#include<stdio.h>
int main()
{
    int i, j, n;
    int a[10];
    int temp, swap, min;

    printf("\nEnter array size: ");
    scanf("%d", &n);

    printf("Enter %d array elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        min=i;
        for(j=i; j<n; j++)
        {
            if(a[min]>a[j])
            {
                min = j;
            }

            swap = a[min];
            a[min] = a[i];
            a[i] = swap;
        }
    }

    printf("\nSorted array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}