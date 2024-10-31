#pragma once
#include <unordered_map>

class HashMap
{
private:
    std::unordered_map<int, std::list<int>> hashMapContainer;
public:
    
    int GetHashKey(int data);
    void AddData(int data);
    void RemoveData(int data);
    int GetData(int data);
};
