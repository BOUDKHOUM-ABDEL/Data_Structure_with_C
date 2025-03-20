#include <stdio.h>
#include <stdlib.h>
#include "head.h"

int main() {
    int val, choice;
    node* root = NULL;

    do {
        puts("-------------------------MENU----------------------------");
        printf("1. Add a node at the beginning.\n");
        printf("2. Add a node at the end.\n");
        printf("3. Delete a node from the beginning.\n");
        printf("4. Delete a node from the end.\n");
        printf("5. Display the list.\n");
        printf("6. Exit.\n");
        puts("--------------------------------------------------------");
        printf("Choose an option: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                puts("--------------------------------------------------------");
                printf("Enter a value to add at the beginning: ");
                scanf("%d", &val);
                root = insertAtBeginning(root, val);
                displayList(root);
                break;
                ;

            case 2:
                puts("--------------------------------------------------------");
                printf("Enter a value to add at the end: ");
                scanf("%d", &val);
                root = insertAtEnd(root, val);
                displayList(root);
                break;

            case 3:
                puts("--------------------------------------------------------");
                root = deleteFromBeginning(root);
                displayList(root);
                break;

            case 4:
                puts("--------------------------------------------------------");
                root = deleteFromEnd(root);
                displayList(root);
                break;

            case 5:
                puts("--------------------------------------------------------");
                displayList(root);
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid option. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}
