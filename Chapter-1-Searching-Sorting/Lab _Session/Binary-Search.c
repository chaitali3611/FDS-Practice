#include <stdio.h>

int main()
{
    int n, key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];
    int low = 0, high, mid;

    int i;   
    printf("Enter %d sorted array elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the key element: ");
    scanf("%d", &key);

    high = n - 1;

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