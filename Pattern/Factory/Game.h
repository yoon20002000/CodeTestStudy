#pragma once
#include <string>
class Game
{
public:
    enum class EGameType
    {
        MobileGame,
        PCGame,
    };
    static Game* CreateGame(EGameType gameType);

    
    virtual ~Game() = default;
    virtual void Play() =0;
    virtual class std::string DisplayName()=0;
};
