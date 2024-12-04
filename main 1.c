#include <stdio.h>

typedef struct {
  int num ;
  char nom[50];
  char post[10];
}Player;

int main() {

  Player p1, p2, p3;

  printf("put the player number:");
  scanf("%d",&p1.num);
  printf("type the palyer name:");
  scanf("%s",&p1.nom);
  printf("type the player post:");
  scanf("%[^\n]s",&p1.post);

  printf("\n");
  printf("put the player number:");
  scanf("%d",&p2.num);
  printf("type the palyer name:");
  scanf("%[^\n]s",&p2.nom);
  printf("type the player post:");
  scanf("%[^\n]s",&p2.post);

  printf("\n");
  printf("put the player number:");
  scanf("%d",&p3.num);
  printf("type the palyer name:");
  scanf("%[^\n]s",&p3.nom);
  printf("type the player post:");
  scanf("%[^\n]s",&p3.post);

  printf("\n");
  printf("First player info: %d - %s - %s \n", p1.num, p1.nom, p1.post);
  printf("Second player info: %d - %s - %s \n", p2.num, p2.nom, p2.post);
  printf("Third player info: %d - %s - %s \n", p3.num, p3.nom, p3.post);
  return 0;
}
