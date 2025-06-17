#include <stdio.h>

typedef struct  node {
    int data; // Data part of the node
    struct node *next; // Pointer to the next node
} node;

int main(void)
{
    count = 5; // Number of nodes to create
    node *list = NULL; // Pointer to the first node

    for (size_t i = 0; i < count; i++)
    {
        /* code */
        node *new_node = malloc(sizeof(node)); // Allocate memory for a new node

        if (new_node == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            return 1; // Exit if memory allocation fails
        }

        new_node->data = 1; // Assign data to the new node
        new_node->next = list; // Link the new node to the current list
        list = new_node; // Update the list to point to the new node

        
    }
    
    // Iterate over nodes in the linked list
    for (node *current = list; current != NULL; current = current->next) {

        printf("%d\n", current->data); // Print the data of each node

        // If at the end of the list
        if (current->next == NULL) {
            // Append the node
            current->next = new_node; // Link the last node to the new node
            break;
        }

        // If in the middle of the list
        if (current->next < current->next->new_node) {
            // Append the node
            new_node->next = current->next; // Link the current node to the new node
            current->next = new_node; // Update the current node to point to the new node
            break;
        }
    }
}
