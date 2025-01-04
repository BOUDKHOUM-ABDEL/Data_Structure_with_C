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
#endif
