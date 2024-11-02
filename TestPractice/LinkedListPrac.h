#pragma once
#include <memory>

class LinkNode
{
public :
    int data;
    LinkNode* next;
    LinkNode(int value);
};
class LinkedListPrac
{
private:
    LinkNode* head;
public:
    LinkedListPrac();
    ~LinkedListPrac();

    void append(int value);
    void deleteNode(int value);
    void printList()const;
};
