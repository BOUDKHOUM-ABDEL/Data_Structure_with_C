#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED


typedef struct node {
    int data;
    struct node* next;
} node;


node* newnode(int val) {
    node* new_node = (node*)malloc(sizeof(node));
    if (!new_node) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    new_node->data = val;
    new_node->next = NULL;
    return new_node;
}


node* insertbeginning(node* start, int val) {
    node* new_node = newnode(val);
    new_node->next = start;
    return new_node;
}


node* insertend(node* start, int val) {
    node* new_node = newnode(val);
    if (start == NULL) {
        return new_node;
    } else {
        node* temp = start;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
        return start;
    }
}


node* deletebeginning(node* start) {
    if (start == NULL) {
        printf("Deletion failed, the list is empty.\n");
        return NULL;
    }
    node* temp = start;
    start = start->next;
    free(temp);
    return start;
}


node* deleteend(node* start) {
    if (start == NULL) {
        printf("Deletion failed, the list is empty.\n");
        return NULL;
    }
    if (start->next == NULL) {
        free(start);
        return NULL;
    }
    node* temp = start;
    node* prev = NULL;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
    return start;
}


void showlist(node* start) {
    if (start == NULL) {
        printf("The list is empty.\n");
        return;
    }
    printf("The values in the list are: ");
    while (start != NULL) {
        printf("%d -> ", start->data);
        start = start->next;
    }
    printf("NULL\n");
}


#endif



