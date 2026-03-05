#include <stdio.h>
int main(){
    int temp, i, j;
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d sorted array elements: ", n);
    
    for(int i = 0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i<n; i++)
    {
        for(j=0;j<n-i-1; j++)
        {
            if(a[j] > a[j-1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("Sorted array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}