#pragma once
#include "Subject.h"

class Physics : public Subject
{
public:
    void updateEntity(Entity* entity);
};
