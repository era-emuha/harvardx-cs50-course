typedef struct singly_linked_list {
    int data;
    struct singly_linked_list *next;
} singly_linked_list_node;

{
    /* data */
    singly_linked_list_node *head; // Pointer to the first node in the list
    singly_linked_list_node *tail; // Pointer to the last node in the list
    int size; // Number of elements in the list
};

// Declaring doubly linked list
typedef struct doubly_linked_list {
    int data;
    struct doubly_linked_list *next;
    struct doubly_linked_list *prev;
} doubly_linked_list_node;

{
    /* data */
    doubly_linked_list_node *head; // Pointer to the first node in the list
    doubly_linked_list_node *tail; // Pointer to the last node in the list
    int size; // Number of elements in the list
};