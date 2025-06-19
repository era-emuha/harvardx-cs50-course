// Libraries
#include <stdio.h>

// Binary search tree node structure
typedef struct Node {
    int data; // Data part of the node
    struct Node *left; // Pointer to the left child
    struct Node *right; // Pointer to the right child
} Node;

// Create a hash table node structure
typedef struct HashNode {
    int key; // Key part of the hash table node
    int value; // Value part of the hash table node
    struct HashNode *next; // Pointer to the next node in case of collision
} HashNode;

