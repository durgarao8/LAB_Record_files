#include <stdio.h>
#include <string.h>

int main() {
    int n, found = 0;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    char str[n][50], search[50];

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

    printf("Enter string to search: ");
    scanf("%s", search);

    for (int i = 0; i < n; i++) {
        if (strcmp(str[i], search) == 0) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("String found in the list.\n");
    else
        printf("String not found.\n");

    return 0;
}
