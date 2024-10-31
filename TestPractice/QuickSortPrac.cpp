#include "QuickSortPrac.h"

#include <iostream>

QuickSortPrac::QuickSortPrac()
{
    int lengnth = sizeof(inputArrayPtr) / sizeof(int);
    for(int i = 0 ; i < lengnth ; i++)
    {
        std::cout << inputArrayPtr[i] << ", ";
    }
    std::cout <<std::endl;
    quickSort(0, lengnth-1);

    for(int i = 0 ; i < lengnth ; i++)
    {
        std::cout << inputArrayPtr[i] << ", ";
    }
}

void QuickSortPrac::quickSort(int low, int high)
{
    int pivot;

    if(low < high)
    {
        partition(low,high,pivot);
        quickSort(low, pivot -1);
        quickSort(pivot + 1, high);
    }
    
}

void QuickSortPrac::partition(int low, int high, int& outPivot)
{
    int i,j;
    int pivotItem = inputArrayPtr[low];
    j = low;
    for(i = low +1 ; i<=high;++i)
    {
        if(inputArrayPtr[i]<pivotItem)
        {
            ++j;
            int temp = inputArrayPtr[i];
            inputArrayPtr[i] = inputArrayPtr[j];
            inputArrayPtr[j] = temp;
        }
    }

    outPivot = j;
    int temp =inputArrayPtr[low]; 
    inputArrayPtr[low] = inputArrayPtr[outPivot];
    inputArrayPtr[outPivot] = temp;
}
