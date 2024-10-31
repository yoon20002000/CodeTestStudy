#include "BubbleSortPrac.h"

#include <iostream>

BubbleSortPrac::BubbleSortPrac()
{
    bubbleSort();
}

void BubbleSortPrac::bubbleSort()
{
    int length = sizeof(inputArrayPtr) / sizeof(int);
    int j =0;

    for(; j < length-1;++j)
    {
        for(int i = 0 ; i < length - j - 1 ; ++i)
        {
            if(inputArrayPtr[i] > inputArrayPtr[i + 1])
            {
                swap(&inputArrayPtr[i], &inputArrayPtr[i + 1]);   
            }
        }    
    }
    
    for (int i = 0; i < length; ++i)
    {
        std::cout << inputArrayPtr[i] << ", ";
    }
}

void BubbleSortPrac::swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}