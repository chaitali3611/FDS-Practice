#include <stdio.h>
int main(){
    int temp, i;
    int n;
    printf("Enter the size of the aaray: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d sorted array elements: ", n);
    
    for(int i = 0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i<n; i++){

        if(a[i - 1] > a[i]){
            temp = a[i];
            a[i - 1] = a[i];
            a[i-1] = temp;
        }
        
    }
    printf("Sorted array is: ");
            printf("%d", a[i]);

    return 0;
}