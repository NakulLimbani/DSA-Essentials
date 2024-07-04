/*#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
};

class DoublyLinkedList
{
    public:
    Node* head = NULL;
    Node* tail = NULL;


    void insertAtStart(int data)
    {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        
    }

    void insertAtEnd(int data)
    {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        if(head==NULL)
        {
            insertAtStart(data);
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode; 

        }
    } 

    void insertAtPos(int data , int pos)
    {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        int curr_pos = 0;
        Node* temp = head;
        while(curr_pos != (pos-1))
        {
            temp = temp->next;
            curr_pos++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next->prev = newNode; 
    }
    
    void deleteAtStart()
    {
        Node* temp = head;
        head = head->next;
        free(temp);
        head->prev = NULL;
    }

    void deleteAtEnd()
    {
        Node* temp = tail;
        tail->prev->next = NULL;
        tail = tail->prev;
        free(temp);
    }

    void deleteAtPos(int pos)
    {
        int curr_pos = 0;
        Node* temp = head;
        Node* temp1 = NULL;
        while(curr_pos != pos-1)
        {
            temp = temp->next;
            curr_pos++;
        }
        temp1 = temp->next;
        temp->next = temp->next->next;
        free(temp1);
    }
    
    void updateAtPos(int data , int pos)
    {
        Node* temp = head;
        int curr_pos = 0;
        while(curr_pos != pos)
        {
            temp = temp->next;
            curr_pos++;
        }
        temp->data = data;

    }

    void searching(int key)
    {
        Node* temp = head;
        int flag = 0 , pos = 0;
        while(temp != NULL)
        {
            if(temp->data == key)
            {
                flag = 1;
                cout << "Element found at pos:"<<pos<<endl;
                break;
            }
            temp = temp->next;
            pos++;
        }
        if(flag==0)
        {
            cout<<"Element Not Found\n";
        }
    }

    void counting()
    {
        Node* temp = head;
        int count = 0;
        while(temp!=NULL)
        {
            temp = temp->next;
            count++;
        }
        cout << "Total Node Are :\n"<<count<<endl;
    }

    void display()
    {
        Node* temp = head;
        cout<<"NULL<->";
        while(temp!= NULL)
        {
            cout<<temp->data<<"<->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

};

int main()
{
    DoublyLinkedList list;
    
    list.insertAtStart(30);
    list.insertAtStart(20);
    list.insertAtStart(10);
    list.insertAtEnd(60);
    list.insertAtEnd(70);
    list.insertAtEnd(80);

    list.insertAtPos(60,3);
    list.display();

    list.deleteAtStart();
    list.deleteAtEnd();
    list.deleteAtPos(3);

    list.display();
    list.updateAtPos(60,3);
    list.display();

    list.searching(60);
    list.counting();

}
*/
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;
};

class DoublyLinkedList
{
public:
    Node* head = NULL;
    Node* tail = NULL;

    void insertAtStart(int data)
    {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertAtEnd(int data)
    {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        if (head == NULL)
        {
            insertAtStart(data);
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void insertAtPos(int data, int pos)
    {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        int curr_pos = 0;
        Node* temp = head;
        while (curr_pos != (pos - 1))
        {
            temp = temp->next;
            curr_pos++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next->prev = newNode;
    }

    void deleteAtStart()
    {
        Node* temp = head;
        head = head->next;
        free(temp);
        if (head != NULL)
        {
            head->prev = NULL;
        }
    }

    void deleteAtEnd()
    {
        Node* temp = tail;
        tail->prev->next = NULL;
        tail = tail->prev;
        free(temp);
    }

    void deleteAtPos(int pos)
    {
        int curr_pos = 0;
        Node* temp = head;
        Node* temp1 = NULL;
        while (curr_pos != pos - 1)
        {
            temp = temp->next;
            curr_pos++;
        }
        temp1 = temp->next;
        temp->next = temp->next->next;
        free(temp1);
        if (temp->next != NULL)
        {
            temp->next->prev = temp;
        }
    }

   /* void updateAtPos(int data, int pos)
    {
        Node* temp = head;
        int curr_pos = 0;
        while (curr_pos != pos)
        {
            temp = temp->next;
            curr_pos++;
        }
        temp->data = data;
    }
    */

    void searching(int key)
    {
        Node* temp = head;
        int flag = 0, pos = 0;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                flag = 1;
                cout << "Element found at pos:" << pos << endl;
                break;
            }
            temp = temp->next;
            pos++;
        }
        if (flag == 0)
        {
            cout << "Element Not Found\n";
        }
    }

    /*void counting()
    {
        Node* temp = head;
        int count = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        cout << "Total Node Are :\n" << count << endl;
    }
    */

    void display()
    {
        Node* temp = head;
        cout << "NULL<->";
        while (temp != NULL)
        {
            cout << temp->data << "<->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void menu()
    {
        int choice;
        int data, pos, key;

        while (true)
        {
            cout << "\nDoubly Linked List Menu\n";
            cout << "1. Insert at the start\n";
            cout << "2. Insert at the end\n";
            cout << "3. Insert at a specific position\n";
            cout << "4. Delete at the start\n";
            cout << "5. Delete at the end\n";
            cout << "6. Delete at a specific position\n";
            cout << "7. Search for an element\n";
            cout << "8. Display list\n";
            cout << "9. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Enter data to insert at the start: ";
                cin >> data;
                insertAtStart(data);
                break;
            case 2:
                cout << "Enter data to insert at the end: ";
                cin >> data;
                insertAtEnd(data);
                break;
            case 3:
                cout << "Enter data to insert: ";
                cin >> data;
                cout << "Enter position to insert at: ";
                cin >> pos;
                insertAtPos(data, pos);
                break;
            case 4:
                deleteAtStart();
                break;
            case 5:
                deleteAtEnd();
                break;
            case 6:
                cout << "Enter position to delete: ";
                cin >> pos;
                deleteAtPos(pos);
                break;
            case 7:
                cout << "Enter element to search: ";
                cin >> key;
                searching(key);
                break;
            case 8:
                display();
                break;
            case 9:
                cout << "Exiting program.\n";
                return;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
            }
        }
    }
};

int main()
{
    DoublyLinkedList list;
    list.menu();

    return 0;
}

