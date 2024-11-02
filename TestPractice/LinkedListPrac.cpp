#include "LinkedListPrac.h"

#include <iostream>

LinkNode::LinkNode(int value)
{
    data = value;
    next = nullptr;
}

LinkedListPrac::LinkedListPrac(): head(nullptr)
{
}

LinkedListPrac::~LinkedListPrac()
{
    LinkNode* curNode = head;

    while (curNode !=nullptr)
    {
        LinkNode* temp  = curNode;
        curNode = curNode->next;
        delete temp;
    }
}

void LinkedListPrac::append(int value)
{
    LinkNode* newNode = new LinkNode(value);
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        LinkNode* curNode = head;
        while (curNode->next != nullptr)
        {
            curNode = curNode->next;
        }
        curNode->next = newNode;
    }
}

void LinkedListPrac::deleteNode(int value)
{
    if (head == nullptr)
    {
        return;
    }
    if(head->data == value)
    {
        LinkNode* curNode = head;
        head = curNode->next;
        delete curNode;
        return;
    }

    LinkNode* curNode = head;
    
    while (curNode->next != nullptr && curNode->next->data != value)
    {
        curNode = curNode->next;
    }

    if(curNode->next == nullptr)
    {
        return;
    }

    LinkNode* temp = curNode->next;
    curNode->next = curNode->next->next;
    delete temp;
}

void LinkedListPrac::printList() const
{
    LinkNode* curNode = head;
    while (curNode != nullptr)
    {
        std::cout <<"Data : " << curNode->data << " ";
        curNode = curNode->next;
    }
    std::cout << std::endl;
}
