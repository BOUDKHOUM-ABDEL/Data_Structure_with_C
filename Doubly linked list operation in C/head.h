#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

typedef struct node {
    int data;
    struct node* right;  
    struct node* left;   
} node;


node* newnode(int val) {
    node* nouv = (node*)malloc(sizeof(node));
    if (!nouv) {
        perror("Allocation échouée");
        exit(EXIT_FAILURE);
    }
    nouv->data = val;
    nouv->right = nouv; 
    nouv->left = nouv;
    return nouv;
}


node* inserdebut(node* start, int val) {
    node* nouv = newnode(val);
    if (start == NULL) { 
        return nouv;
    }
    node* last = start->left;
    nouv->right = start;
    nouv->left = last;
    start->left = nouv;
    last->right = nouv;
    return nouv; 


node* inserfin(node* start, int val) {
    if (start == NULL) { // Empty list
        return newnode(val);
    }
    node* nouv = newnode(val);
    node* last = start->left;
    nouv->left = last;
    nouv->right = start;
    last->right = nouv;
    start->left = nouv;
    return start; 
}


node* suppdebut(node* start) {
    if (start == NULL) {
        printf("Suppression impossible, la liste est vide.\n");
        return NULL;
    }
    if (start->right == start) { 
        free(start);
        return NULL;
    }
    node* temp = start;
    node* last = start->left;
    start = start->right;
    start->left = last;
    last->right = start;
    free(temp);
    return start; 
}

node* suppfin(node* start) {
    if (start == NULL) {
        printf("Suppression impossible, la liste est vide.\n");
        return NULL;
    }
    if (start->right == start) { 
        free(start);
        return NULL;
    }
    node* last = start->left;
    node* second_last = last->left;
    second_last->right = start;
    start->left = second_last;
    free(last);
    return start; 
}


void shownode(node* start) {
    if (start == NULL) {
        printf("La liste est vide.\n");
        return;
    }
    printf("Les valeurs de la liste sont : ");
    node* temp = start;
    do {
        printf("%d -> ", temp->data);
        temp = temp->right;
    } while (temp != start);
    printf("(Retour au début)\n");
}



#endif 