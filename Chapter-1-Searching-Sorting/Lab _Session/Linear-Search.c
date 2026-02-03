#include <stdio.h>
int main(){
    int a[5];
    printf("Enter 5 array element: ");

    for(int i=0; i<5; i++){
        scanf("%d", &a[i]);
    }

    int b;
    printf("Enter key element: ");
    scanf("%d", &b);

    for(int i=0; i<5; i++){
        if(b==a[i]){
            printf("%d is available at the position of %d", b, i);
            break;
        }

        else{
            printf("Key element is not available.");
            break;
        }
    }
    return 0;
}