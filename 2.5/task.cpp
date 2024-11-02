#include <iostream>
#include "list.h"
using namespace std;

//Функція для вставки елементів на початок однозв’язного списку (для першого списку)
void insertAtBeginning(Node*& head, char data)
{
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

//Функція для вставки елементів в кінець однозв’язного списку (для другого списку)
void insertAtEnd(Node*& head, char data)
{
    Node* newNode = new Node(data);//виклик конструктора 
    if (!head)
    {
        head = newNode;
    }
    else 
    {
        Node* temp = head;
        while (!isEnd(temp)) 
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp; // Створюємо зв'язок для двозв’язного списку
    }
}

void printList(Node* head)
{
    Node* temp = head;
}

int main() 
{
    //Формуємо перший односпрямований список
    Node* firstList = nullptr;
    for (char i = 'A'; i < 'A' + 6; ++i) 
    {
        insertAtBeginning(firstList, i);//Додаємо елементи A, B, C, D, E, F на початок
    }
    printList(firstList);

    //Формуємо другий двоспрямований список 
    Node* secondList = nullptr;
    for (char i = 'A'; i < 'A' + 6; ++i) 
    {
        insertAtEnd(secondList, i);//Додаємо елементи A, B, C, D, E, F в кінець
    }
    printList(secondList);

    return 0;   
}
