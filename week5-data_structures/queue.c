// Declaring the queue structure
#include <stdio.h>

// Queue structure definition
typedef struct {
    int *data;      // Pointer to the queue's data array
    int front;     // Index of the front element in the queue
    int rear;      // Index of the rear element in the queue
    int capacity;  // Maximum number of elements the queue can hold
} Queue;

// Function to create a queue with a given capacity
Queue* create_queue(int capacity) {
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    queue->capacity = capacity;
    queue->front = 0; // Front index
    queue->rear = -1; // Rear index, initially empty
    queue->data = (int *)malloc(queue->capacity * sizeof(int));
    return queue;
}

// Function to check if the queue is full
int is_full(Queue *queue) {
    return (queue->rear + 1) % queue->capacity == queue->front;
}

// Function to check if the queue is empty
int is_empty(Queue *queue) {
    return queue->front == (queue->rear + 1) % queue->capacity;
}

// Function to enqueue an element into the queue
void enqueue(Queue *queue, int value) {
    if (is_full(queue)) {
        printf("Queue overflow! Cannot enqueue %d\n", value);
        return;
    }
    queue->rear = (queue->rear + 1) % queue->capacity; // Circular increment
    queue->data[queue->rear] = value;
}

// Function to dequeue an element from the queue
int dequeue(Queue *queue) {
    if (is_empty(queue)) {
        printf("Queue underflow! Cannot dequeue from an empty queue\n");
        return -1; // Return -1 to indicate an error
    }
    int value = queue->data[queue->front];
    queue->front = (queue->front + 1) % queue->capacity; // Circular increment
    return value;
}

// Function to peek at the front element of the queue without removing it
int peek(Queue *queue) {
    if (is_empty(queue)) {
        printf("Queue is empty! Cannot peek\n");
        return -1; // Return -1 to indicate an error
    }
    return queue->data[queue->front];
}

// Function to free the queue's memory
void free_queue(Queue *queue) {
    if (queue) {
        free(queue->data); // Free the data array
        free(queue);       // Free the queue structure
    }
}

// Main function to demonstrate queue operations
int main() {
    int capacity = 5;
    Queue *queue = create_queue(capacity);

    // Enqueue some elements
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    enqueue(queue, 50);

    // Attempt to enqueue when the queue is full
    enqueue(queue, 60); // Should print an overflow message

    // Dequeue some elements
    printf("Dequeued: %d\n", dequeue(queue)); // Should print 10
    printf("Dequeued: %d\n", dequeue(queue)); // Should print 20

    // Peek at the front element
    printf("Front element: %d\n", peek(queue)); // Should print 30

    // Free the queue's memory
    free_queue(queue);

    return 0;
}

