#pragma once

class CustomString
{
private:
    char* data;
    size_t length;
    size_t capacity;
public:
    CustomString();
    CustomString(const char* str);
    CustomString(const CustomString& other);
    CustomString operator+(const CustomString& other) const;
    CustomString& operator=(const CustomString& other);
    CustomString& operator=(CustomString&& other) noexcept;
    const char& operator[](size_t index) const;
    ~CustomString();
};
