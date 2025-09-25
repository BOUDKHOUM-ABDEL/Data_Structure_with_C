#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define MAX 50  // taille maximale de la pile

typedef struct {
    int items[MAX];
    int top;
} Stack;

// Initialiser la pile
void init(Stack* s) {
    s->top = -1;
}

// Vérifier si la pile est vide
int isEmpty(Stack* s) {
    return s->top == -1;
}

// Vérifier si la pile est pleine
int isFull(Stack* s) {
    return s->top == MAX - 1;
}

// Empiler (Push)
void push(Stack* s, int val) {
    if (isFull(s)) {
        printf("⚠️ La pile est pleine, impossible d'ajouter %d\n", val);
        return;
    }
    s->items[++s->top] = val;
    printf("✅ %d a été empilé dans la pile.\n", val);
}

// Dépiler (Pop)
int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("⚠️ La pile est vide, rien à dépiler.\n");
        return -1;
    }
    return s->items[s->top--];
}

// Afficher la pile
void display(Stack* s) {
    if (isEmpty(s)) {
        printf("⚠️ La pile est vide.\n");
        return;
    }
    printf("📜 Contenu de la pile (du sommet vers la base):\n");
    for (int i = s->top; i >= 0; i--) {
        printf("   [%d]\n", s->items[i]);
    }
}

#endif // HEAD_H_INCLUDED
