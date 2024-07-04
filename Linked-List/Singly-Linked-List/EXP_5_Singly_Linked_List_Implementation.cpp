#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Linkedlist {
    Node* head = NULL;
  
public:
    void insertNode(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;
        if (head == NULL) 
        head = newNode;
        else {
            Node* temp = head;
            while (temp->next)
            {
                 temp = temp->next;
            }
            temp->next = newNode;
        }
    }
  
    void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        if (!head) cout << "List empty";
        cout << endl;
    }
  
    void deleteNode(int nodeOff) {
        Node *temp1 = head, *temp2 = NULL;
        int ListLen = 0;
        while (temp1) {
            temp1 = temp1->next;
            ListLen++;
        }
        if (head && ListLen >= nodeOff) {
            temp1 = head;
            if (nodeOff == 1) {
                head = head->next;
                delete temp1;
                return;
            }
            while (nodeOff-- > 1) {
                temp2 = temp1;
                temp1 = temp1->next;
            }
            temp2->next = temp1->next;
            delete temp1;
        }
    }
};

int main() {
    Linkedlist list;
    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);
    list.insertNode(4);
    cout << "Elements of the list are: ";
    list.printList();
    int delN;
    cout << "Enter The Position Of Node To Delete:";
    cin >> delN;
    list.deleteNode(delN);
    cout << "Elements of the list are: ";
    list.printList();
    return 0;
}