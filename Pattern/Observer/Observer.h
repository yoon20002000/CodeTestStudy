#pragma once

class Entity
{
    
};
class Event
{
    
};
class Observer
{
public:
    virtual ~Observer();
    virtual void OnNotify(const Entity& entity, Event event)=0;
};
