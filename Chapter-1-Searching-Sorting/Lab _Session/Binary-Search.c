#include <stdio.h>
int main()
{
    int mid, high;
    int low = 0;
    int key = 77;
    int a[8];

    printf("Enter 8 array element: ");
    for(int i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
    }

    high = 8-1;
    mid = (low + high)/2;

    for(int i = 0; i<8; i++)
    {
        if(key == a[mid])
        {
            printf("\n%d is present at %d", key, mid);
        }
        else if(key > a[mid])
        {
            low = mid + 1;
            mid = (low + high)/2;
        }
        else if(key < a[mid])
        {
            low = mid - 1;
            mid = (low + high)/2;
        }
        else
        {
            printf(" ");
        }
    }
    printf("Element not found.");
    return 0;
}