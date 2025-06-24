// Create a stack data structure in C using an array.
#include <stdio.h>

// Stack structure definition
typedef struct {
    int *data;      // Pointer to the stack's data array
    int top;       // Index of the top element in the stack
    int capacity;  // Maximum number of elements the stack can hold
} Stack;

// Function to create a stack with a given capacity
Stack* create_stack(int capacity) {
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1; // Stack is initially empty
    stack->data = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}

// Function to check if the stack is full
int is_full(Stack *stack) {
    return stack->top == stack->capacity - 1;
}

// Function to check if the stack is empty
int is_empty(Stack *stack) {
    return stack->top == -1;
}

// Function to push an element onto the stack
void push(Stack *stack, int value) {
    if (is_full(stack)) {
        printf("Stack overflow! Cannot push %d\n", value);
        return;
    }
    stack->data[++stack->top] = value;
}

// Function to pop an element from the stack
int pop(Stack *stack) {
    if (is_empty(stack)) {
        printf("Stack underflow! Cannot pop from an empty stack\n");
        return -1; // Return -1 to indicate an error
    }
    return stack->data[stack->top--];
}

// Function to peek at the top element of the stack without removing it
int peek(Stack *stack) {
    if (is_empty(stack)) {
        printf("Stack is empty! Cannot peek\n");
        return -1; // Return -1 to indicate an error
    }
    return stack->data[stack->top];
}

// Function to free the stack's memory
void free_stack(Stack *stack) {
    if (stack) {
        free(stack->data); // Free the data array
        free(stack);       // Free the stack structure
    }
}

// Main function to demonstrate stack operations
int main() {
    int capacity = 5;
    Stack *stack = create_stack(capacity);

    // Push elements onto the stack
    for (int i = 0; i < capacity; i++) {
        push(stack, i + 1);
        printf("Pushed %d onto the stack\n", i + 1);
    }

    // Attempt to push another element to demonstrate overflow
    push(stack, 6);

    // Peek at the top element
    printf("Top element is: %d\n", peek(stack));

    // Pop elements from the stack
    while (!is_empty(stack)) {
        printf("Popped %d from the stack\n", pop(stack));
    }

    // Attempt to pop from an empty stack to demonstrate underflow
    pop(stack);

    // Free the stack memory
    free_stack(stack);
    
    return 0;
}

