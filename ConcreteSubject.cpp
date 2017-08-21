#include "ConcreateSubject.h"

void ConcreteSubject::Attach(Observer *pObserver)
{
    m_ObserverList.push_back(pObserver);
}

void ConcreteSubject::Detach(Observer *pObserver)
{
    m_ObserverList.remove(pObserver);
}

void ConcreteSubject::Notify()
{
    list<Observer* >::iterator it = m_ObserverList.begin();
    while(it != m_ObserverList.end())
    {
        (*it)->Update(m_iState);
        ++it;
    }
}
