#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED


typedef struct node {
    int data;
    struct node* next;
} node;


node* newnode(int val) {
    node* nouv = (node*)malloc(sizeof(node));
    if (!nouv) {
        perror("Allocation échouée");
        exit(EXIT_FAILURE);
    }
    nouv->data = val;
    nouv->next = NULL;
    return nouv;
}


node* inserdebut(node* start, int val) {
    node* nouv = newnode(val);
    nouv->next = start;
    return nouv;
}


node* inserfin(node* start, int val) {
    node* nouv = newnode(val);
    if (start == NULL) {
        return nouv;
    } else {
        node* temp = start;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = nouv;
        return start;
    }
}


node* suppdebut(node* start) {
    if (start == NULL) {
        printf("Suppression impossible, la liste est vide.\n");
        return NULL;
    }
    node* temp = start;
    start = start->next;
    free(temp);
    return start;
}


node* suppfin(node* start) {
    if (start == NULL) {
        printf("Suppression impossible, la liste est vide.\n");
        return NULL;
    }
    if (start->next == NULL) {
        free(start);
        return NULL;
    }
    node* temp = start;
    node* preptr = NULL;
    while (temp->next != NULL) {
        preptr = temp;
        temp = temp->next;
    }
    preptr->next = NULL;
    free(temp);
    return start;
}


void shownode(node* start) {
    if (start == NULL) {
        printf("La liste est vide.\n");
        return;
    }
    printf("Les valeurs de la liste sont : ");
    while (start != NULL) {
        printf("%d -> ", start->data);
        start = start->next;
    }
    printf("NULL\n");
}


#endif
