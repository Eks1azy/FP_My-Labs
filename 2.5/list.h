#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node 
{
    char data;//тип данних символьний згыдно з варіантом 
    Node* next;//вказівник на наступний елемент 
    Node* prev;//вказівник на попередній елемент
    Node(char d) : data(d), next(nullptr), prev(nullptr) {}//конструктор вузла 
};

//Inline-функція для перевірки на кінець списку 
//перевіряє, чи є вказівник на наступний елемент нульовим
inline bool isEnd(Node* node) 
{
    return node->next == nullptr;
}

#endif
