#include "binarySearch.h"

binarySearch::binarySearch()
{
}

int binarySearch::solution(int array[], int size, int value)
{
    int first = 0;
    int last = size -1;
    int mid = 0 ;
    int i = 0;

    while (first != last)
    {
        mid = first + (last - first) / 2;
        if(array[mid] > value)
        {
            last = mid - 1;
        }
        else if(array[mid] < value)
        {
            first = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
