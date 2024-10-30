#pragma once
#include "Game.h"

class MobileGame : public Game
{
public:
    void Play() override;
    std::string DisplayName() override;
};
