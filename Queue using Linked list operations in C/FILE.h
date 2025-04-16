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

void init_file(File *f){
  f->tete= f->queue=NULL;
   f->taille=0;
}

#endif // PILE_H_INCLUDED
