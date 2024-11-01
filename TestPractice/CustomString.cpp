#include "CustomString.h"

#include <cstring>
#include <string>

CustomString::CustomString() : length(0), capacity(0)
{
}

CustomString::CustomString(const char* str)
{
    length = strlen(str);
    data = new char[length + 1];
    capacity = length;
    strcpy(data, str);
}

CustomString::CustomString(const CustomString& other)
{
    length = other.length;
    data = new char[length + 1];
    capacity = other.capacity;
    strcpy(data, other.data);
}

CustomString CustomString::operator+(const CustomString& other) const
{
    size_t newlength = other.length + length;
    char* newData = new char[newlength + 1];
    std::strcpy(newData, data);
    std::strcat(newData, other.data);

    CustomString newString (newData);

    delete[] newData;
    
    return newString;
}

CustomString& CustomString::operator=(const CustomString& other) 
{
    if (this == &other)
    {
        return *this;
    }

    delete[] data;
    length = other.length;
    if(other.capacity > capacity)
    {
        capacity = other.capacity;
        data = new char[length + 1];    
    }
    
    std::strcpy(data, other.data);

    return *this;
}

CustomString& CustomString::operator=(CustomString&& other)
{
    if (this == &other)
    {
        return *this;
    }

    delete[] data;
    data = other.data;
    length = other.length;

    other.data = nullptr;
    other.length = 0;

    return *this;
}

const char& CustomString::operator[](size_t index) const
{
    return data[index];
}

CustomString::~CustomString()
{
    delete[] data;
}
