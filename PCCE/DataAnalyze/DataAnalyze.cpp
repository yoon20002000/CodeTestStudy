#include "DataAnalyze.h"
#include <algorithm>
DataAnalyze::DataAnalyze(vector<vector<int>> data, string ext, int val_ext, string sort_by)
{
    solution(data,ext,val_ext,sort_by);
}

vector<vector<int>> DataAnalyze::solution(vector<vector<int>> data, string ext, int val_ext, string sort_by)
{
    vector<vector<int>> answer;

    int dataIndex = getDataIndex(ext);
    int sortIndex = getDataIndex(sort_by);

    for (vector<int> data_raw : data)
    {
        if(data_raw[dataIndex]< val_ext)
        {
            answer.push_back(data_raw);
        }
    }

    sort(answer.begin(),answer.end(),[sortIndex](const vector<int>& a, const vector<int>& b)
    {

        return a[sortIndex] < b[sortIndex];
        
    });

    return answer;
}
