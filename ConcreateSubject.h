#ifndef CONCREATESUBJECT_H_INCLUDED
#define CONCREATESUBJECT_H_INCLUDED
#include "Subject.h"
#include <iostream>
#include <list>

using namespace std;


class ConcreteSubject : public Subject
{
public:
    void Attach(Observer *pObserver);
    void Detach(Observer *pObserver);
    void Notify();

    void SetState(int state)
    {
        m_iState = state;
    }

private:
    list<Observer *> m_ObserverList;
    int m_iState;
};


#endif // CONCREATESUBJECT_H_INCLUDED
