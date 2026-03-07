#include<stdio.h>
int main()
{
    int i, j, temp, n;
    int a[10];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d array element: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=1; i<n; i++)
    {
        j= i-1;
        temp = a[i];
            
        while(j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        
        a[j+1] = temp;
    }

    printf("\nSorted array is: ");

    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}