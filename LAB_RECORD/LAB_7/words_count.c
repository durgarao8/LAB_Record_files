#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char *token;
    int count = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); // Read full line (including spaces)

    // strtok() breaks string into tokens separated by spaces, tabs, or newlines
    token = strtok(sentence, " \t\n");

    while (token != NULL) {
        count++;
        token = strtok(NULL, " \t\n");
    }

    printf("Number of words = %d\n", count);

    return 0;
}
