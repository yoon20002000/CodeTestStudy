#include "Babbling.h"

#include <iostream>
#include <ostream>

int Babbling::MySolution(const vector<string>& babbling)
{
    int answer = 0;

    for(string bab : babbling)
    {
        if(bab.empty())
        {
            continue;
        }
        
        string babCopy = bab; 
        
        for(string canBab : CanSpeakArray)
        {
            auto findIter = GetFindIter(babCopy,canBab);
            if(findIter != string::npos)
            {
                babCopy.replace(babCopy.find(canBab),canBab.length()," ");
            }

            if(babCopy.empty())
            {
                break;
            }
        }

        if(CheckIsRealEmpty(babCopy))
        {
            answer +=1;
        }
        
    }
    
    return answer;
}

int Babbling::Solution(const vector<string>& babbling)
{
    int answer = 0;

    for(string bab : babbling)
    {
        bool isAnswer = true;

        for(int charIndex = 0 ; charIndex < bab.size(); ++charIndex)
        {
            if(bab.substr(charIndex,3) == CanSpeakArray[0])
            {
                charIndex+=2;
            }
            else if(bab.substr(charIndex,2) ==  CanSpeakArray[1])
            {
                charIndex +=1;
            }
            else if(bab.substr(charIndex,3) ==  CanSpeakArray[2])
            {
                charIndex+=2;
            }
            else if(bab.substr(charIndex,2) ==  CanSpeakArray[3])
            {
                charIndex+=1;
            }
            else
            {
                isAnswer = false;
                break;
            }
        }
        if(isAnswer == true)
        {
            answer += 1;
        }
    }
    return answer;
}

bool Babbling::IsContainStr(const string& main, const string& search) const
{
    return GetFindIter(main,search) != string::npos;
}

size_t Babbling::GetFindIter(const string& main, const string& search) const
{
    return main.find(search);
}

bool Babbling::CheckIsRealEmpty(const string& checkStr)
{
    for(auto c : checkStr)
    {
        if(c != ' ')
        {
            return false;
        }
    }
    return true;
}

Babbling::Babbling(std::vector<std::string> babbling)
{
    int result = MySolution(babbling);

    cout<<result<<endl;
    while (true)
    {
        
    }
}
