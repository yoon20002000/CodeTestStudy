#pragma once
#include <string>
#include <vector>

using namespace std;
/// Input vector<std::string> test{"ayaye", "uuuma", "ye", "yemawoo", "ayaa"};

class Babbling
{
private:
    std::string CanSpeakArray[4] = { "aya", "ye", "woo", "ma"};
    int MySolution(const vector<string>& babbling);
    int Solution(const vector<string>& babbling);
    bool IsContainStr(const string& main, const string& search) const;
    size_t GetFindIter(const string& main, const string& search) const;
    bool CheckIsRealEmpty(const string& checkStr);
    
public:
    Babbling(std::vector<std::string> babbling);
    
};
