#ifndef CONCRETEOBSERVER_H_INCLUDED
#define CONCRETEOBSERVER_H_INCLUDED
#include "Subject.h"
#include <iostream>

using namespace std;


class ConcreteObserver : public Observer
{
public:
    ConcreteObserver(Subject *pSubject) : m_pSubject(pSubject){}

    void Update(int value)
    {
        cout << "ConcreteObserver get the update. New State: "<< value << endl;
    }

private:
    Subject *m_pSubject;
};

class ConcreteObserver2 : public Observer
{
public:
    ConcreteObserver2(Subject *pSubject) : m_pSubject(pSubject){}

    void Update(int value)
    {
        cout << "ConcreteObserver2 get the update. New State: "<< value << endl;
    }

private:
    Subject *m_pSubject;
};
#endif // CONCRETEOBSERVER_H_INCLUDED
