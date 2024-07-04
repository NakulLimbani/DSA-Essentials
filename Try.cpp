/*#include <iostream>
using namespace std;
class ArrayList{
    private:
    int *arr;
    int size;
    int capacity;
    public:
    ArrayList(int initCap = 10)
    {
        capacity = initCap;
        arr = new int[capacity];
        size = 0;
    }

    ~ArrayList()
    {
        delete [] arr;
    }

    void add(int value)
    {
        if(size > capacity)
        {
            int newCapacity = 2*capacity;
            int *newArr = new int[newCapacity];
            for(int i=0;i<size;i++)
            {
                newArr[i] = arr[i];
            }
            delete []arr;
            arr = newArr;
            capacity= newCapacity;
        }
        arr[size++] = value;
    }

    int display(int index)
    {
        if(index < 0 || index >= size)
        {
            cout << "Index Out Of Bounds"<<endl;
        }
        return arr[index];
    }
};
    int main()
    {
        ArrayList list;
        list.add(10);
        list.add(20);
        list.add(30);
        cout << list.display(1);

        
        return 0;
    }
*/

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
};
class LinkedList{
    

    public:
    Node* head = NULL;
     void insertAtStart(int data)
     {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;

        if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            /*Node* temp = head;
            while(temp->next)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            */
           newNode->next = head;
           head = newNode;
        }
     }

     void insertAtEnd(int data)
     {
        Node* newNode =  new Node;
        newNode->data = data;
        newNode->next = NULL;

        if(head == NULL)
        {
            insertAtStart(data);
        }
        else
        {
            Node* temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
     }

     void insertAtPos(int data,int pos)
     {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;
        if(head == NULL)
        {
            cout<<"Empty List"<<endl;
            insertAtStart(data);
        }
        else
        {
            Node* temp = head;
            int curr_pos = 0;
            while(curr_pos != pos-1)
            {
                temp = temp->next;
                curr_pos++;
            }
            newNode->next = temp->next;
            temp->next = newNode;

        }
     }
     
     void  deleteAtStart()
     {
        if(head == NULL)
        {
            cout<<"Empty List"<<endl;
        }
        else 
        {
            Node* temp = head;
            head = head->next;
            //temp->next = NULL;
            free(temp);
        }
     }
     
     void  deleteAtEnd()
     {
        if(head == NULL)
        {
            cout<<"Empty List"<<endl;
        }
        else 
        {
            Node* temp = head;
           /* while(temp->next != NULL)
            {
                temp1 = temp;
                temp = temp->next;
            }
            temp1->next = NULL;
            free(temp);
            */
           while(temp->next->next != NULL)
           {
            temp = temp->next;
           }
           temp->next = NULL;
           
        }
     }

     void deleteAtPos(int pos)
     {
        Node* temp = head;
        Node* temp1 = NULL;
        int curr_pos =0;
        while(curr_pos != (pos-1))
        {
            temp =temp->next;
            curr_pos++;
        }
        temp1 = temp->next;
        temp->next = temp->next->next;
        free(temp1);
        
        
     }
     
     void updateAtPos(int data,int pos)
     {
        Node* temp = head;
        int curr_pos = 0;
        while(curr_pos != pos)
        {
            temp = temp->next;
            curr_pos++;
        }
        temp-> data = data;
     }

     void search(int key)
     {
        int flag=0 ,pos = 0;
        Node* temp = head;
        while(temp != NULL)
        {
            if(temp->data == key)
            {
                flag = 1;
                cout << "Key Found at Pos = "<<pos<<endl;
                break;
            }
            temp = temp->next;
            pos++;
        }
        if(flag == 0)
        {
            cout <<" Value Not Found" <<endl;
        }
     }
     
     void Counting()
     {
        Node* temp = head;
        int count =0;
        while(temp !=NULL)
        {
            temp = temp->next;
            count++;
        }
        cout << "Total Number Of Nodes Are = "<<count<<endl;
     }
     void display()
     {
         Node* temp = head;
         while(temp)
         {
            cout << temp-> data <<"->";
            temp = temp->next;
         }
         cout<<"NULL\n";
      
     }

};

int main()
{
    LinkedList list;
   
    list.insertAtStart(30);
    list.insertAtStart(20);
    list.insertAtStart(10);
    list.insertAtEnd(60);
    list.insertAtEnd(50);
    //list.insertAtPos(50,2);
    //list.deleteAtStart();
    //list.deleteAtEnd();
    //list.deleteAtPos(2);
    list.updateAtPos(40,3);
    list.search(40);

    list.display();
    list.Counting();

    return 0;
    
}
