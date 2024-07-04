// C++ program for the above approach

#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node(int d)
        {
            data = d;
            next = NULL;
        }
};

class Queue {
    public:
        Node *front, *rear;
        Queue() { front = rear = NULL; }

        void enQueue(int x)
        {

            // Create a new LL node
            Node* newNode = new Node(x);

            // If queue is empty, then
            // new node is front and rear both
            if (rear == NULL) {
                front = rear = newNode;
                return;
            }

            // Add the new node at
            // the end of queue and change rear
            rear->next = newNode;
            rear = newNode;
	}

	// Function to remove
	// a key from given queue q
	void deQueue()
	{
		// If queue is empty, return NULL.
		if (front == NULL)
			return;

		// Store previous front and
		// move front one node ahead
		Node* temp = front;
		front = front->next;

		// If front becomes NULL, then
		// change rear also as NULL
		if (front == NULL)
			rear = NULL;

		delete (temp);
	}
};

// Driver code
int main()
{

	Queue q;
	q.enQueue(10);
	q.enQueue(20);
	q.deQueue();
	q.deQueue();
	q.enQueue(30);
	q.enQueue(40);
	q.enQueue(50);
	q.deQueue();
	cout << "Queue Front : " << ((q.front != NULL) ? (q.front)->data : -1)<< endl;
	cout << "Queue Rear : " << ((q.rear != NULL) ? (q.rear)->data : -1);
}
// This code is contributed by rathbhupendra
