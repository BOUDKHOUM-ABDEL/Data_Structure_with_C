#include <stdio.h>
#include <stdlib.h>
#include "FILE.h"
int main()
{

   node F1;
   int val;
   int choix;
   init_file(&F1);
   
  do{

       puts("------------------menu-------------------");
       printf("1.ajouter une valeur la file \n");
       printf("2.supprimer la tete a la file \n");
       printf("3.afficher la file \n");
       printf("0.quitte \n");
       puts("------------------menu-------------------");


       printf("choisis votre modification:\n \n");
       scanf("%d",&choix);
       switch(choix){
             case 1:
                    printf("\n--------------------------------\n");
                    printf("donner la valeur pour ajouter:\n");
                    scanf("%d",&val);
                    enfiler(&F1, val);
                    printf("\n");
                    show_file(&F1);
                    break;

           
           default:
                   printf("Option invalide. Veuillez reessayer.\n");

        }
    } while (choix != 0);

 
    return 0;
}

