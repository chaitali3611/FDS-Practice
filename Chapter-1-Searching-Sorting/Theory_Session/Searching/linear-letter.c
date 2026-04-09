#include <stdio.h>
#include <string.h>

int main() {
    char str[100], key;
    int i, found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter character to search: ");
    scanf(" %c", &key);   // space before %c is important

    // Linear search for character
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == key) {
            printf("Character found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Character not found\n");
    }

    return 0;
}