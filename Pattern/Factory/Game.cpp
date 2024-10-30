#include "Game.h"
#include "MobileGame.h"
#include "PCGame.h"

Game* Game::CreateGame(EGameType gameType)
{
    Game* returnPtr = nullptr;
    switch (gameType)
    {
    case EGameType::MobileGame:
        {
            returnPtr = new MobileGame();
            break;
        }
    case EGameType::PCGame:
        {
            returnPtr = new PCGame();
            break;
        }
    }
    return returnPtr;
}
