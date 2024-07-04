#include <iostream>

class Node {
public:
    int data;
    Node* next;
};

class CircularLinkedList {
    Node* head = NULL;

public:
    
    // Function to create a new node
    Node* createNode(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = head;
    }

    // Function to insert a new node at the beginning of the circular linked list
    void insertAtBeginning(int data) {
        Node* newNode = createNode(data);
        if (head == NULL) {
            newNode->next = newNode; // Point to itself for the first node
        } else {
            Node* tail = head;
            while (tail->next != head) {
                tail = tail->next;
            }
            tail->next = newNode;
            newNode->next = head;
        }
        head = newNode;
    }

    // Function to insert a new node at the end of the circular linked list
    void insertAtEnd(int data) {
        Node* newNode = createNode(data);
        if (head == NULL) {
            newNode->next = newNode; // Point to itself for the first node
            head = newNode;
        } else {
            Node* tail = head;
            while (tail->next != head) {
                tail = tail->next;
            }
            tail->next = newNode;
            newNode->next = head;
        }
    }

    // Function to print the circular linked list
    void printCircularLinkedList() {
        if (head == nullptr) {
            std::cout << "Circular Linked List is empty." << std::endl;
            return;
        }
        Node* temp = head;
        do {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        std::cout << " (Head)" << std::endl;
    }
};

int main() {
    CircularLinkedList myList;

    // Insert elements at the beginning
    myList.insertAtBeginning(3);
    myList.insertAtBeginning(2);
    myList.insertAtBeginning(1);

    // Insert elements at the end
    myList.insertAtEnd(4);
    myList.insertAtEnd(5);

    // Print the circular linked list
    std::cout << "Circular Linked List: ";
    myList.printCircularLinkedList();

    return 0;
}