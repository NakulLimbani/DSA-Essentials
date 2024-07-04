#include <iostream>
using namespace std;


class ArrayList
{
    private:
        int *arr;
        int capacity;
        int size;

    public:
        ArrayList(int initialCapacity = 10)
        {
            capacity = initialCapacity;
            arr = new int[capacity];
            size = 0;   
        }
 
        ~ArrayList()
        {
            delete[] arr;
        }

        void add(int value)
        {
            if(size >= capacity)
            {
                int newCapacity = capacity * 2 ;
                int *newArr = new int[newCapacity];
                for(int i = 0 ; i < size ; ++i)
                {
                    newArr[i] = arr[i];
                }
                delete[] arr ;
                arr = newArr;
                capacity = newCapacity;
            }
            arr[size ++] = value;
        }
        int get(int index) const
        {
            if(index < 0 || index >= size )
            {
                cerr << "Index Is Out Of Limits!"<<endl;
                exit(1);
            }
            return arr[index];        
        }

};

int main()
{
    ArrayList list;

    list.add(9);
    list.add(18);
    list.add(27);

    cout << "Element At Index 0 :" << list.get(0) << endl;
    cout << "Element At Index 1 :" << list.get(1) << endl;
    cout << "Element At Index 2 :" << list.get(2) << endl;

    return 0;

}