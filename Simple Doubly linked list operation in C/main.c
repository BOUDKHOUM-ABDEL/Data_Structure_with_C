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
        
       
    } while (choice != 6);

    return 0;
}
