#include "Subject.h"

#include "Observer.h"

void Subject::notify(const Entity& entity, Event event)
{
    for(Observer* observer : _observers)
    {
        observer->OnNotify(entity,event);
    }
}

void Subject::addObserver(Observer* observer)
{
    _observers.push_back(observer);
}

void Subject::removeObserver(Observer* observer)
{
    _observers.remove(observer);
}
