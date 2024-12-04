#pragma once
#include <list>
#include <vector>

class Entity;
class Event;
class Observer;

class Subject
{
private:
    std::list<Observer*> _observers;
protected:
    void notify(const Entity& entity, Event event);
public:
    void addObserver(Observer* observer);
    void removeObserver(Observer* observer);
};
