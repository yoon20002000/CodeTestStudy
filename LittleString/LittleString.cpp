#include "LittleString.h"

LittleString::LittleString(const string& t, const string& p)
{
    solution(t,p);
}

int LittleString::solution(const string& t, const string& p)
{
    int answer = 0;
    size_t pSize = p.length();
    long pCompare = std::stol(p);

    for (int i = 0; i + pSize <= t.length(); ++i)
    {
        string sub = t.substr(i, pSize);
        const long cur = std::stol(sub);

        if (cur <= pCompare)
        {
            ++answer;
        }
    }

    return answer;
}
