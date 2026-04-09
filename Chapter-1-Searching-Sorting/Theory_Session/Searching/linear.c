#include <stdio.h>
#include <string.h>

int main() {
    char str[10][50], key[50];
    int n, i, found = 0;

    printf("How many strings? ");
    scanf("%d", &n);

    // Input multiple strings using scanf
    for (i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", str[i]);
    }

    printf("Enter key string to search: ");
    scanf("%s", key);

    // Linear search using for loop
    for (i = 0; i < n; i++) {
        if (strcmp(str[i], key) == 0) {
            printf("Key string found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Key string not found\n");
    }

    return 0;
}