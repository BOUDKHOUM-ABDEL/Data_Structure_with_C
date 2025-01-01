#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

typedef struct node {
    int data;
    struct node* right;  
    struct node* left;   
} node;


node* createNewNode(int val) {
    node* newNode = (node*)malloc(sizeof(node));
    if (!newNode) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    newNode->data = val;
    newNode->right = newNode; 
    newNode->left = newNode;
    return newNode;
}


node* insertAtBeginning(node* start, int val) {
    node* newNode = createNewNode(val);
    if (start == NULL) { 
        return newNode;
    }
    node* last = start->left;
    newNode->right = start;
    newNode->left = last;
    start->left = newNode;
    last->right = newNode;
    return newNode;  
}


node* insertAtEnd(node* start, int val) {
    if (start == NULL) { // Empty list
        return createNewNode(val);
    }
    node* newNode = createNewNode(val);
    node* last = start->left;
    newNode->left = last;
    newNode->right = start;
    last->right = newNode;
    start->left = newNode;
    return start;  
}


node* deleteFromBeginning(node* start) {
    if (start == NULL) {
        printf("Deletion not possible, the list is empty.\n");
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

node* deleteFromEnd(node* start) {
    if (start == NULL) {
        printf("Deletion not possible, the list is empty.\n");
        return NULL;
    }
    if (start->right == start) { 
        free(start);
        return NULL;
    }
    node* last = start->left;
    node* secondLast = last->left;
    secondLast->right = start;
    start->left = secondLast;
    free(last);
    return start; 
}


void displayList(node* start) {
    if (start == NULL) {
        printf("The list is empty.\n");
        return;
    }
    printf("The values in the list are: ");
    node* temp = start;
    do {
        printf("%d -> ", temp->data);
        temp = temp->right;
    } while (temp != start);
    printf("(Back to the beginning)\n");
}

#endif
