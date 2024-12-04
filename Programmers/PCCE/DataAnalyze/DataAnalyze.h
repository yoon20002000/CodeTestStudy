#pragma once
#include <vector>
#include <string>
using namespace std;

class DataAnalyze
{
public:
    DataAnalyze(vector<vector<int>> data, string ext, int val_ext, string sort_by);
private:
    vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) ;

    uint8_t getDataIndex(const string& data_type)
    {
        if(data_type == "code")
        {
            return 0;
        }
        else if(data_type == "date")
        {
            return 1;
        }
        else if(data_type == "maximum")
        {
            return 2;   
        }
        else
        {
            return 3;
        }
    }
    bool isOverDate(int dateA, int dateB)
    {
        return dateA > dateB;
    }

   
};
