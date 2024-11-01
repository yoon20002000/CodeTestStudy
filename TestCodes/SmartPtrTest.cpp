#include "SmartPtrTest.h"

#include <iostream>
#include <memory>

void SmartPtrTest::TestCode()
{
    std::unique_ptr<int> ptr = std::make_unique<int>(1);
    
    std::unique_ptr<int> ptr2 = std::move(ptr); // 에러
    std::shared_ptr<int> ptr3 = std::make_shared<int>(1);
    std::weak_ptr<int> ptr4 = ptr3;
    if(ptr == nullptr)
    {
        std::cout << "is nullptr"<<std::endl;
    }
    
    if(auto temp = ptr4.lock())
    {
        std::cout << *temp << std::endl;
        std::cout << "SharedPtr use count 1 : "<<ptr3.use_count() << std::endl;
    }

    std::cout << "SharedPtr use count 2 : "<<ptr3.use_count() << std::endl;

    ptr3.reset();

    if(auto temp = ptr4.lock())
    {
        std::cout << *temp << std::endl;
    }
    else
    {
        std::cout<< "is expired!!"<<std::endl;
    }
}
