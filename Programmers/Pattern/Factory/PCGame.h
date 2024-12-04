#pragma once
#include "Game.h"

class PCGame : public Game
{
public:
    void Play() override;
    std::string DisplayName() override;
};
