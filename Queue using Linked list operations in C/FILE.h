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

node* new_node(int val){
   node* nouv=malloc(sizeof(node));

  if (nouv==NULL){
    puts("echec de l'allocation dynamique");
    return NULL;
  } else{
      nouv->data=val;
      nouv->next=NULL;
       return nouv;}
  }

 int est_vide(File *f){
     return f->taille==0;
 }

void enfiler(File* f, int val){
   node* nouv = new_node(val);
   if (nouv == NULL) return;  // En cas d'échec de l'allocation
    if (est_vide(f)){

       f->tete = f->queue = nouv;

      }
    else {
        f->queue->next=nouv;
        f->queue=nouv;

        }
   f->taille++;

}
void defiler(File* f){


    if (est_vide(f)){
        puts("la file est vide");
        return;
        }
    node* temp = f->tete;
    f->tete=temp->next;
    free(temp);
    f->taille--;
    if (f->tete == NULL) {
        f->queue = NULL;
    }

return;
    }
void show_file(File *f){
     node* ptr=f->tete;
      if (est_vide(f)){
        puts("\n la file est vide\n\n");
        }
      else{
    puts("\n les valeurs de la file sont:\n");
    while (ptr != NULL) {
      printf("%d -- ", ptr->data);
      ptr = ptr->next;
}

    }
     printf(" \n");
     return;
    }
#endif // PILE_H_INCLUDED
