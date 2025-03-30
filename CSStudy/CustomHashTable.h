#pragma once
#include <unordered_map>

class SinglyLinkedListNode
{
public:
    SinglyLinkedListNode(int inData);
    ~SinglyLinkedListNode();
    
public:
    SinglyLinkedListNode* next;
    int data;
};

class SinglyLinkedList
{
public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    void AddNode(int data);
    void DeleteNode(int data);
    int GetNode(int data);
private:
    SinglyLinkedListNode* head;
};

class CustomHashTable
{
public:
    CustomHashTable(int capacity);
    int GetHashKey(int data);
    void AddData(int data);
    void DeleteData(int data);
    int GetData(int data);
private:
    std::unordered_map<int, SinglyLinkedList> hashTable;
};
