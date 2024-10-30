#pragma once
#include "Observer.h"

class Achievements : public Observer
{
public:
    virtual void OnNotify(const Entity& entity, Event event) override;
private:
    bool heroIsOnBrige;;
};
