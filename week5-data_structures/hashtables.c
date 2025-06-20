// Hashtable implementation in C
#include <stdio.h>

// Hash table structure definition
typedef struct {
    int *data;      // Pointer to the hash table's data array
    int capacity;   // Maximum number of elements the hash table can hold
} HashTable;

// Function to create a hash table with a given capacity
HashTable* create_hash_table(int capacity) {
    HashTable *table = (HashTable *)malloc(sizeof(HashTable));
    table->capacity = capacity;
    table->data = (int *)malloc(table->capacity * sizeof(int));
    for (int i = 0; i < table->capacity; i++) {
        table->data[i] = -1; // Initialize all slots to -1 (indicating empty)
    }
    return table;
}

// Hash function to compute the index for a given key
int hash_function(int key, int capacity) {
    return key % capacity; // Simple modulo hash function
}

// Function to insert a key into the hash table
void insert(HashTable *table, int key) {
    int index = hash_function(key, table->capacity);
    while (table->data[index] != -1) { // Linear probing for collision resolution
        index = (index + 1) % table->capacity;
    }
    table->data[index] = key; // Insert the key
}

// Function to search for a key in the hash table
int search(HashTable *table, int key) {
    int index = hash_function(key, table->capacity);
    while (table->data[index] != -1) { // Continue until an empty slot is found
        if (table->data[index] == key) {
            return index; // Key found, return its index
        }
        index = (index + 1) % table->capacity; // Linear probing
    }
    return -1; // Key not found
}

// Function to delete a key from the hash table
void delete_key(HashTable *table, int key) {
    int index = hash_function(key, table->capacity);
    while (table->data[index] != -1) { // Continue until an empty slot is found
        if (table->data[index] == key) {
            table->data[index] = -1; // Mark the slot as empty
            return;
        }
        index = (index + 1) % table->capacity; // Linear probing
    }
}

// Function to free the hash table
void free_hash_table(HashTable *table) {
    if (table) {
        free(table->data); // Free the data array
        free(table);       // Free the hash table structure
    }
}

// Main function to demonstrate the hash table operations
int main() {
    int capacity = 10; // Define the capacity of the hash table
    HashTable *table = create_hash_table(capacity); // Create the hash table

    // Insert some keys into the hash table
    insert(table, 5);
    insert(table, 15);
    insert(table, 25);

    // Search for keys in the hash table
    printf("Searching for key 5: %d\n", search(table, 5));   // Should return index
    printf("Searching for key 15: %d\n", search(table, 15)); // Should return index
    printf("Searching for key 25: %d\n", search(table, 25)); // Should return index
    printf("Searching for key 35: %d\n", search(table, 35)); // Should return -1 (not found)

    // Delete a key from the hash table
    delete_key(table, 15);
    printf("Searching for key 15 after deletion: %d\n", search(table, 15)); // Should return -1

    // Free the hash table memory
    free_hash_table(table);

    return 0; // Exit successfully
}

