#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
typedef struct node {
    int data;
    struct node* right; 
    struct node* left;  
} node;

node* createNewNode(int val) {
    node* ptr = (node*)malloc(sizeof(node));
    if (!ptr) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    ptr->data = val;
    ptr->right = NULL; 
    ptr->left = NULL;  
    return ptr;
}
node* insertAtBeginning(node* start, int val) {
    node* ptr = createNewNode(val);
    if (start == NULL) {
        return ptr;
 }
    ptr->right = start;
    start->left = ptr;
    return ptr; 
}
node* insertAtEnd(node* start, int val) {
    if (start == NULL) {
        return createNewNode(val); 
    }
    node* ptr = createNewNode(val);
    node* temp = start;
    while (temp->right != NULL) { 
        temp = temp->right;
    }
    temp->right = ptr;
    ptr->left = temp;
    return start; 
}
node* deleteFromBeginning(node* start) {
    if (start == NULL) {
        printf("Deletion not possible, the list is empty.\n");
        return NULL;
    }
    node* temp = start;
    start = start->right;
if (start != NULL) {
        start->left = NULL;
    }
    free(temp);
    return start;
}
node* deleteFromEnd(node* start) {
    if (start == NULL) {
        printf("Deletion not possible, the list is empty.\n");
        return NULL;
    }
    if (start->right == NULL) {
 if (start->right == NULL) { 
        free(start);
        return NULL;
    }
    node* temp = start;
    while (temp->right != NULL) { 
        temp = temp->right;
    }
    temp->left->right = NULL;
    free(temp);
    return start;
}
void displayList(node* start) {
    if (start == NULL) {
        printf("The list is empty.\n");
        return;
    }
    printf("The values in the list are: ");
    node* temp = start;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->right;
    }

#endif
