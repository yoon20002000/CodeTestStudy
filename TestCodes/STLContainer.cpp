#include "STLContainer.h"

#include <iostream>
#include <map>
#include <ostream>
#include <vector>

STLContainer::STLContainer()
{
    TestCode();
}

void STLContainer::TestCode()
{
    std::vector<int> v;
        
    for(int i = 0 ; i < 300; i++)
    {
        v.push_back(i);
        std::cout<<v.capacity()<< std::endl;   
    }
    // 일단 MSVC를 쓰기 때문에 2배는 아님. 정확한 규칙은 파악 못함.
}
