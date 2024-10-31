#pragma once

class QuickSortPrac
{
public:
    QuickSortPrac();
private:
    int inputArrayPtr[8] = {15,22,13,27,12,10,20,25};
    void quickSort(int low, int high);
    void partition(int low, int high, int& outPivot);
};
