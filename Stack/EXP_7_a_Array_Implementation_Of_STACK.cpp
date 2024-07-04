#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the stack

class StackArray 
{
private:
    int arr[MAX_SIZE];
    int top;

public:
    StackArray() {
        top = -1; // Initialize the top of the stack to -1
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    void push(int data) {
        if (isFull()) {
            cout << "Stack overflow! Cannot push element " << data << endl;
            return;
        }
        arr[++top] = data;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow! Cannot pop from an empty stack." << endl;
            return;
        }
        --top;
    }

    int topElement() {
        if (isEmpty()) {
            cout << "Stack is empty. No top element." << endl;
            return -1; // You can choose to return a sentinel value or throw an exception
        }
        return arr[top];
    }
};

int main() {
    StackArray stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top element: " << stack.topElement() << endl; // Should print 3

    stack.pop();
    cout << "Top element after pop: " << stack.topElement() << endl; // Should print 2

    return 0;
}