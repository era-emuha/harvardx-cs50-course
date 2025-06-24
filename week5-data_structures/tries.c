// Tries data structure implementation in C
#include <stdio.h>

// Trie node structure definition
typedef struct TrieNode {
    struct TrieNode *children[26]; // Assuming only lowercase letters a-z
    int is_end_of_word; // Flag to indicate if the node marks the end of a word
} TrieNode;

// Function to create a new Trie node
TrieNode* create_trie_node() {
    TrieNode *node = (TrieNode *)malloc(sizeof(TrieNode));
    for (int i = 0; i < 26; i++) {
        node->children[i] = NULL; // Initialize all children to NULL
    }
    node->is_end_of_word = 0; // Initially, it does not mark the end of a word
    return node;
}

// Function to insert a word into the Trie
void insert(TrieNode *root, const char *word) {
    TrieNode *current = root;
    while (*word) {
        int index = *word - 'a'; // Calculate index for the character
        if (current->children[index] == NULL) {
            current->children[index] = create_trie_node(); // Create a new node if it doesn't exist
        }
        current = current->children[index]; // Move to the child node
        word++;
    }
    current->is_end_of_word = 1; // Mark the end of the word
}

// Function to search for a word in the Trie
int search(TrieNode *root, const char *word) {
    TrieNode *current = root;
    while (*word) {
        int index = *word - 'a'; // Calculate index for the character
        if (current->children[index] == NULL) {
            return 0; // Word not found
        }
        current = current->children[index]; // Move to the child node
        word++;
    }
    return current->is_end_of_word; // Return 1 if it's the end of a word, otherwise 0
}

// Function to free the Trie
void free_trie(TrieNode *root) {
    if (root == NULL) return; // Base case: if the node is NULL, do nothing
    for (int i = 0; i < 26; i++) {
        free_trie(root->children[i]); // Recursively free all children
    }
    free(root); // Free the current node
}

// Example usage of the Trie data structure
int main() {
    TrieNode *root = create_trie_node(); // Create the root of the Trie

    // Insert words into the Trie
    insert(root, "hello");
    insert(root, "world");
    insert(root, "trie");
    insert(root, "data");

    // Search for words in the Trie
    printf("Searching for 'hello': %d\n", search(root, "hello")); // Should return 1
    printf("Searching for 'world': %d\n", search(root, "world")); // Should return 1
    printf("Searching for 'trie': %d\n", search(root, "trie"));   // Should return 1
    printf("Searching for 'data': %d\n", search(root, "data"));   // Should return 1
    printf("Searching for 'notfound': %d\n", search(root, "notfound")); // Should return 0

    // Free the Trie
    free_trie(root);
    
    return 0;
}

