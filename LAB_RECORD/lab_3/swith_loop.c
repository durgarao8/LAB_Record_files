#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\nEnter your choice:\n");
        printf("1 - Hi\n");
        printf("2 - Hello\n");
        printf("3 - Thank You\n");
        printf("4 - Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Hi\n");
                break;
            case 2:
                printf("Hello\n");
                break;
            case 3:
                printf("Thank You\n");
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);  // Loop continues until user enters 4

    return 0;
}
