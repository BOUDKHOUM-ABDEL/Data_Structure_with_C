#include "head.h"

int main() {
    Stack s;
    int choix, val;

    init(&s);

    do {
        puts("\n----------------- MENU PILE (ARRAY) -----------------");
        printf("1. Empiler une valeur (Push)\n");
        printf("2. Depiler une valeur (Pop)\n");
        printf("3. Afficher la pile\n");
        printf("0. Quitter\n");
        puts("----------------------------------------------------");
        printf("Votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
        case 1:
            printf("Donner une valeur à empiler: ");
            scanf("%d", &val);
            push(&s, val);
            break;

        case 2:
            val = pop(&s);
            if (val != -1)
                printf("🗑️ %d a été dépilé.\n", val);
            break;

        case 3:
            display(&s);
            break;

        case 0:
            printf("👋 Au revoir aventurier !\n");
            break;

        default:
            printf("❌ Option invalide.\n");
        }
    } while (choix != 0);

    return 0;
}
