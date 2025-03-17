#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED

typedef struct{
int tete ;
int taille;
int file[50];
int queue ;
}mypile;

int estpleine(mypile F){
     return F.queue == F.taille;
 }
 int estvide(mypile F){
     return F.queue == F.tete;
 }


#endif 
