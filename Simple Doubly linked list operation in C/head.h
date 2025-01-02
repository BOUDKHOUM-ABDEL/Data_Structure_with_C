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

#endif
