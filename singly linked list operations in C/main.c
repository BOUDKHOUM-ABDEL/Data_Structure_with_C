#include <stdio.h>
#include <stdlib.h>
#include "list.h"


int main() {
    int val, choix;
    node* start = NULL;

    do {
        puts("-------------------------MENU----------------------------");
        printf("1. Ajouter un node au debut.\n");
        printf("2. Ajouter un node a la fin.\n");
        printf("3. Supprimer un node au debut.\n");
        printf("4. Supprimer un node a la fin.\n");
        printf("5. Afficher la liste.\n");
        printf("6. Quitter.\n");
        puts("--------------------------------------------------------");
        printf("Choisissez une option : ");
        scanf("%d", &choix);

        switch (choix) {

            case 1:
                puts("--------------------------------------------------------");
                printf("Donnez une valeur pour ajouter au debut : ");
                scanf("%d", &val);
                start = inserdebut(start, val);
                shownode(start);
                break;

            case 2:
                puts("--------------------------------------------------------");
                printf("Donnez une valeur pour ajouter a la fin : ");
                scanf("%d", &val);
                start = inserfin(start, val);
                shownode(start);
                break;

            case 3:
                puts("--------------------------------------------------------");
                start = suppdebut(start);
                shownode(start);
                break;

            case 4:
                puts("--------------------------------------------------------");
                start = suppfin(start);
                shownode(start);
                break;

            case 5:
                puts("--------------------------------------------------------");
                shownode(start);
                break;

            case 6:
                printf("Quitter...\n");
                break;

            default:
                printf("Option invalide. Veuillez r�essayer.\n");
        }
    } while (choix != 6);

    return 0;
}

