#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the circular linked list
struct Node {
    int data;
    struct Node* next;
}*newNode;

// Function to create a new node
struct Node* createNode(int data) {
    newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    //return newNode;
}

// Function to insert a new node at the beginning of the circular linked list
void insertAtBeginning(struct Node** head, int data) {
    newNode = createNode(data);
    if (*head == NULL) {
        newNode->next = newNode; // Point to itself for the first node
    } else {
        struct Node* tail = *head;
        while (tail->next != *head) {
            tail = tail->next;
        }
        tail->next = newNode;
        newNode->next = *head;
    }
    *head = newNode;
}

// Function to insert a new node at the end of the circular linked list
void insertAtEnd(struct Node** head, int data) {
    newNode = createNode(data);
    if (*head == NULL) {
        newNode->next = newNode; // Point to itself for the first node
        *head = newNode;
    } else {
        struct Node* tail = *head;
        while (tail->next != *head) {
            tail = tail->next;
        }
        tail->next = newNode;
        newNode->next = *head;
    }
}

// Function to print the circular linked list
void printCircularLinkedList(struct Node* head) {
    if (head == NULL) {
        printf("Circular Linked List is empty.\n");
        return;
    }
    struct Node* temp = head;
        do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf(" (Head)\n"); 
}   

int main() {
    struct Node* head = NULL;

    // Insert elements at the beginning
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    // Insert elements at the end
    insertAtEnd(&head, 4);
    insertAtEnd(&head, 5);

    // Print the circular linked list
    printf("Circular Linked List: ");
    printCircularLinkedList(head);

    return 0;
}