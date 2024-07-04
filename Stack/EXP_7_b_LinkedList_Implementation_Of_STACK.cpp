#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class StackLinkedList {
private:
    Node* top;

public:
    StackLinkedList() {
        top = nullptr;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow! Cannot pop from an empty stack." << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int topElement() {
        if (isEmpty()) {
            cout << "Stack is empty. No top element." << endl;
            return -1; // You can choose to return a sentinel value or throw an exception
        }
        return top->data;
    }
};

int main() {
    StackLinkedList stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top element: " << stack.topElement() << endl; // Should print 3

    stack.pop();
    cout << "Top element after pop: " << stack.topElement() << endl; // Should print 2

    return 0;
}