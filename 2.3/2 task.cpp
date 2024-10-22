//LIFO (last in first out)  where N are elements that are added to the queue, M are elements that are removed from the queue, Size are maximum elements in queue 
//Structure: stack  
//Representation: coherent
//Type: valid.
#include <iostream>
using namespace std;

const int N = 8;
const int M = 4; 
const int Size = 10; 

struct Stack 
{
    float data; 
    Stack* next;
};

int main()
{
    float arr[Size] = { 1.4, 2.1, 2.3, 3.6, 3.1, 4.7, 5.0, 3.53, 6.32, 5.777 };
    Stack* top = NULL;

    cout << "Stack after adding elements: ";
    for (int i = 0; i < N && i < Size; i++)
    {
        Stack* new_node = new Stack;
        new_node->data = arr[i];
        new_node->next = top;
        top = new_node;

        cout << new_node->data << " "; 
    }
    cout << endl;

    cout << "Stack after deleting elements: ";
    for (int i = 0; i < M && top != NULL; i++) 
    {
        cout << top->data << " ";
        Stack* temp = top;
        top = top->next;
        delete temp;
    }
    cout << endl;

    return 0;
}
