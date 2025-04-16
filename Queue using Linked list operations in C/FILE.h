#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED

typedef struct{
   int data;
   struct node* next ;
}node;

typedef struct File{
   node* tete ;
   node* queue;
   int taille;
}File;



#endif // PILE_H_INCLUDED
