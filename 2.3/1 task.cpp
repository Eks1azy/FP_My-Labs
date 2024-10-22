//FIFO (FIRST IN FIRST OUT) where N are elements that are added to the queue, M are elements that are removed from the queue, Size are maximum elements in queue  
#include <iostream>
using namespace std;

const int N = 8;
const int M = 2;
const int Size = 10;

struct Queue
{
    char data[Size];
    int last = -1;
};

int main()
{
    Queue MyQueue;
    char arr[Size] = { '!', '@', '#', '$', '%', '^', '&', '*', ':', '?' };
  
    for (int i = 0; i < N && i < Size; i++)
    {
        MyQueue.last++;
        MyQueue.data[MyQueue.last] = arr[i];
    }
  
    cout << "queue after adding elements: ";
  
    for (int i = 0; i <= MyQueue.last; i++)
    {
        cout << MyQueue.data[i] << " ";
    }
  
    cout << endl;
  
    for (int i = 0; i < M && MyQueue.last >= 0; i++)
      
        for (int j = 0; j < MyQueue.last; j++)
        {
            MyQueue.data[j] = MyQueue.data[j + 1];
        }
        MyQueue.last = (MyQueue.last + Size - 1) % Size;
    }

    cout << "queue after deleting elements: ";

    for (int i = 0; i <= MyQueue.last; i++)
    {
        cout << MyQueue.data[i] << " ";
    }

    cout << endl;

    return 0;
}
