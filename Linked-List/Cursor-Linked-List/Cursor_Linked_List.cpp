#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class CursorLinkedList {
private:
    Node* cursor;

public:
    CursorLinkedList() : cursor(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node(value);
        if (cursor == nullptr) {
            cursor = newNode;
        } else {
            newNode->next = cursor->next;
            cursor->next = newNode;
        }
    }

    void moveCursor() {
        if (cursor != nullptr) {
            cursor = cursor->next;
        }
    }

    void displayList() {
        Node* temp = cursor;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    CursorLinkedList list;

    list.insert(100);
    list.insert(200);
    list.insert(300);
    list.insert(400);
    

    std::cout << "Linked List: ";
    list.displayList();

    list.moveCursor();

    std::cout << "After moving cursor: ";
    list.displayList();

    return 0;
}