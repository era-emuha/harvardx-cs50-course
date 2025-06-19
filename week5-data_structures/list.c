// Libraries
#include <stdio.h>

// Main function
int main(int argc, char const *argv[])
{
    /* code */
    node *list = NULL;

    // Add elements to the list
    for (int i = 0; i < 10; i++)
    {
        node *new_node = malloc(sizeof(node));

        if (new_node == NULL)
        {
            fprintf(stderr, "Memory allocation failed\n");
            return 1;
        }

        new_node->data = i;
        new_node->next = list;
        list = new_node;
    }

    return 0;
}
