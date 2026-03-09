#include <stdio.h>
int main(){
    int n, key;
    int a[10];
    int flag = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("Enter %d array element: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    printf("Enter key element: ");
    scanf("%d", &key);

    for(int i=0; i<n; i++){
        if(key==a[i])
        {
            printf("%d is available at the position of %d", key, i);
            flag = 1;
            break;
        }
    }

        if(flag == 0)
        {
            printf("Key element is not available.");
        }
    
    return 0;
}