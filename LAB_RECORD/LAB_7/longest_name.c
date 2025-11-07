#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of names: ");
    scanf("%d", &n);
    char names[n][50];
    char longest[50];
    int maxLen = 0;

    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
        if (strlen(names[i]) > maxLen) {
            maxLen = strlen(names[i]);
            strcpy(longest, names[i]);
        }
    }

    printf("The longest name is: %s\n", longest);
    return 0;
}
