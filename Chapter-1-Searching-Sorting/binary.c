#include <stdio.h>

int main()
{
    int a[8];
    int low = 0, high, mid;
    int key = 7;
    int i;

    printf("Enter 8 sorted array elements:\n");
    for(i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
    }

    high = 8 - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            printf("%d is present at index %d", key, mid);
            return 0;
        }
        else if(key > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("Element not found");
    return 0;
}
