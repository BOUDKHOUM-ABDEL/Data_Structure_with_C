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
    new_node->next = new_node;
    return new_node;
}


node* insertbeginning(node* tail, int val) {
    node* new_node = newnode(val);
    if (tail == NULL) {

        return new_node;
    }

    new_node->next = tail->next;
    tail->next = new_node;
    return tail;
}


node* insertend(node* tail, int val) {
    node* new_node = newnode(val);
    if (tail == NULL) {

        return new_node;
    }

    new_node->next = tail->next;
    tail->next = new_node;
    return new_node;
}


node* deletebeginning(node* tail) {
    if (tail == NULL) {
        printf("Deletion failed, the list is empty.\n");
        return NULL;
    }
    node* head = tail->next;
    if (head == tail) {

        free(head);
        return NULL;
    }

    tail->next = head->next;
    free(head);
    return tail;
}


node* deleteend(node* tail) {
    if (tail == NULL) {
        printf("Deletion failed, the list is empty.\n");
        return NULL;
    }
    node* head = tail->next;
    if (head == tail) {

        free(tail);
        return NULL;
    }

    node* temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }
    temp->next = tail->next;
    free(tail);
    return temp;
}


void showlist(node* tail) {
    if (tail == NULL) {
        printf("The list is empty.\n");
        return;
    }
    node* temp = tail->next;
    printf("The values in the list are: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != tail->next);
    printf("(HEAD)\n");
}

#endif
