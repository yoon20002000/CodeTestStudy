#pragma once

class BubbleSortPrac
{
public:
    BubbleSortPrac();
private:
    int inputArrayPtr[8] = {15,22,13,27,12,10,20,25};
    void bubbleSort();
    void swap(int* a, int* b);
};
