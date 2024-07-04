#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        std::cout << value << " enqueued to the queue.\n";
    }

    void dequeue() {
        if (front == nullptr) {
            std::cout << "Queue is empty. Cannot dequeue.\n";
        } else {
            Node* temp = front;
            front = front->next;
            if (front == nullptr) {
                rear = nullptr;
            }
            std::cout << temp->data << " dequeued from the queue.\n";
            delete temp;
        }
    }

    void display() {
        Node* temp = front;
        std::cout << "Queue: ";
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << "\n";
    }
};

int main() {
    Queue queue;
    int choice, value;

    do {
        std::cout << "1. Enqueue\n";
        std::cout << "2. Dequeue\n";
        std::cout << "3. Display\n";
        std::cout << "4. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter value to enqueue: ";
                std::cin >> value;
                queue.enqueue(value);
                break;

            case 2:
                queue.dequeue();
                break;

            case 3:
                queue.display();
                break;

            case 4:
                std::cout << "Exiting the program.\n";
                break;

            default:
                std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
