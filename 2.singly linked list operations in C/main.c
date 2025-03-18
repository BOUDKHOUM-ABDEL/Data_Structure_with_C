#include <stdio.h>
#include <stdlib.h>
#include "list.h"


int main() {
    int val, choice;
    node* start = NULL;

    
    do {
        puts("-------------------------MENU----------------------------");
        printf("1. Add a node at the beginning.\n");
        printf("2. Add a node at the end.\n");
        printf("3. Delete a node at the beginning.\n");
        printf("4. Delete a node at the end.\n");
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
                start = insertbeginning(start, val);
                showlist(start);
                break;

            case 2:
                puts("--------------------------------------------------------");
                printf("Enter a value to add at the end: ");
                scanf("%d", &val);
                start = insertend(start, val);
                showlist(start);
                break;

            case 3:
                puts("--------------------------------------------------------");
                start = deletebeginning(start);
                showlist(start);
                break;

            case 4:
                puts("--------------------------------------------------------");
                start = deleteend(start);
                showlist(start);
                break;

            case 5:
                puts("--------------------------------------------------------");
                showlist(start);
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
