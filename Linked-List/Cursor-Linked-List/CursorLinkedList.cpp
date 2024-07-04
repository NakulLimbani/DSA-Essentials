#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

};
class cursorLL
{
    public:
    Node* cursor = NULL;
    void insert(int data)
    {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;
        if(cursor==NULL)
        {
            cursor = newNode;
        }
        else{
            newNode->next = cursor;
            cursor = newNode;
        }
    }

    void moveCursor()
    {
        
        if(cursor != NULL)
        {
            cursor = cursor->next;
        }
    }

    void display()
    {
        Node* temp = cursor;
        while(temp!=NULL)
        {
            cout << temp->data<<"->";
            temp = temp->next;
        }
        cout << "NULL\n";


    }

};

int main()
{
    cursorLL l1;
    l1.insert(10);
    l1.insert(20);
    l1.insert(30);
    l1.insert(40);
    l1.display();
    l1.moveCursor();
    l1.display();
    l1.moveCursor();
    l1.display();
    l1.moveCursor();
    l1.display();
}
