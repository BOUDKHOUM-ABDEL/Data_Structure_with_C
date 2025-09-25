#include "head.h"

int main() {
    Pile P1;
    int val, choix;

    init_pile(&P1);

    do {
        puts("\n------------------ Menu -------------------");
        printf("1. Empiler une valeur\n");
        printf("2. Dépiler une valeur\n");
        printf("3. Afficher la pile\n");
        printf("0. Quitter\n");
        puts("-------------------------------------------");

        printf("Choisissez une option: ");
        scanf("%d", &choix);

        switch (choix) {
        case 1:
            printf("Donner la valeur à empiler: ");
            scanf("%d", &val);
            empiler(&P1, val);
            show_pile(&P1);
            break;

        case 2:
            depiler(&P1);
            show_pile(&P1);
            break;

        case 3:
            show_pile(&P1);
            break;

        case 0:
            printf("Quitter...\n");
            break;

        default:
            printf("Option invalide. Réessayez.\n");
        }
    } while (choix != 0);

    return 0;
}
