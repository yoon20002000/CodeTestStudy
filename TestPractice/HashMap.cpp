#include "HashMap.h"

int HashMap::GetHashKey(int data)
{
    // key 설정 방식은 다르게 적용해도 됨.
    int key = data % 10;
    return key;
}

void HashMap::AddData(int data)
{
    int key = GetHashKey(data);
    auto dataList = hashMapContainer.find(key);
    std::list<int>* list ;
    if(dataList == hashMapContainer.end())
    {
        list = new std::list<int>();
        hashMapContainer.emplace(key,*list);
    }
    else
    {
     list = &dataList->second;   
    }
    list->push_back(data);
}

void HashMap::RemoveData(int data)
{
    int key = GetHashKey(data);
    auto dataList = hashMapContainer.find(key);
    if(dataList != hashMapContainer.end())
    {
        std::list<int>* list = &dataList->second;
        list->remove(data);
    }
}

int HashMap::GetData(int data)
{
    int key = GetHashKey(data);
    auto dataList = hashMapContainer.find(key);
    std::list<int>* list ;
    if(dataList != hashMapContainer.end())
    {
        list = &dataList->second;
        auto iter = std::find(list->begin(), list->end(), data);
        if(iter != list->end())
        {
            return *iter;
        }
    }
    return 0;
}
