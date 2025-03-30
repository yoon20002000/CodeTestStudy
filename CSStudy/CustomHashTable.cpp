#include "CustomHashTable.h"

SinglyLinkedListNode::SinglyLinkedListNode(int inData) : data(inData)
{
    
}

SinglyLinkedListNode::~SinglyLinkedListNode()
{
    
}

SinglyLinkedList::SinglyLinkedList() : head(nullptr)
{
}

SinglyLinkedList::~SinglyLinkedList()
{
    SinglyLinkedListNode* currentNode = head;
    while (currentNode != nullptr)
    {
        SinglyLinkedListNode* nextNode = currentNode->next;
        delete currentNode;
        currentNode = nextNode;
    }
}

void SinglyLinkedList::AddNode(int data)
{
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        SinglyLinkedListNode* temp = head;

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

void SinglyLinkedList::DeleteNode(int data)
{
    if (head == nullptr)
    {
        return;
    }
    if (head->data == data)
    {
        SinglyLinkedListNode* nextNode = head->next;
        delete head;
        head = nextNode;
        return;
    }
    
    SinglyLinkedListNode* temp = head;

    while (temp != nullptr && temp->next->data != data)
    {
        temp = temp->next;
    }
    if (temp == nullptr)
    {
        return;
    }
    else
    {
        SinglyLinkedListNode* deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;
    }
}

int SinglyLinkedList::GetNode(int data)
{
    SinglyLinkedListNode* temp = head;
    while (temp != nullptr && temp->data != data)
    {
        temp = temp->next;
    }
    if (temp == nullptr)
    {
        return -1;
    }
    return temp->data;
}

CustomHashTable::CustomHashTable(int capacity)
{
    if (capacity <= 0)
    {
        capacity = 1;
    }
    hashTable.reserve(capacity);
}

int CustomHashTable::GetHashKey(int data)
{
    return data % 10;
}

void CustomHashTable::AddData(int data)
{
    int hashKey = GetHashKey(data);
    hashTable[hashKey].AddNode(data);
}

void CustomHashTable::DeleteData(int data)
{
    int hashKey = GetHashKey(data);
    hashTable[hashKey].DeleteNode(data);
}

int CustomHashTable::GetData(int data)
{
    int hashKey = GetHashKey(data);
    auto keyValue = hashTable.find(hashKey);
    if (keyValue == hashTable.end())
    {
        return -1;
    }
    else
    {
        return keyValue->second.GetNode(data);
    }
}
