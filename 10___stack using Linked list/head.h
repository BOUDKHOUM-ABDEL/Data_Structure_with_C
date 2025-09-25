#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

// -------- Structure d'un noeud (élément de la pile) --------
typedef struct node {
    int data;
    struct node* next;
} node;

// -------- Structure pile --------
typedef struct {
    node* sommet;  // pointeur vers le sommet
    int taille;    // nombre d'éléments
} Pile;

// -------- Initialiser la pile --------
void init_pile(Pile* p) {
    p->sommet = NULL;
    p->taille = 0;
}

// -------- Créer un nouveau noeud --------
node* new_node(int val) {
    node* nouv = malloc(sizeof(node));
    if (nouv == NULL) {
        puts("Échec de l'allocation dynamique");
        return NULL;
    }
    nouv->data = val;
    nouv->next = NULL;
    return nouv;
}

// -------- Vérifier si la pile est vide --------
int est_vide(Pile* p) {
    return p->taille == 0;
}

// -------- Empiler (push) --------
void empiler(Pile* p, int val) {
    node* nouv = new_node(val);
    if (nouv == NULL) return;

    nouv->next = p->sommet;
    p->sommet = nouv;
    p->taille++;
}

// -------- Dépiler (pop) --------
void depiler(Pile* p) {
    if (est_vide(p)) {
        puts("La pile est vide");
        return;
    }
    node* temp = p->sommet;
    p->sommet = temp->next;
    free(temp);
    p->taille--;
}

// -------- Afficher la pile --------
void show_pile(Pile* p) {
    if (est_vide(p)) {
        puts("\nLa pile est vide\n");
        return;
    }

    puts("\nLes valeurs de la pile sont (du sommet à la base):");
    node* ptr = p->sommet;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

#endif // HEAD_H_INCLUDED
