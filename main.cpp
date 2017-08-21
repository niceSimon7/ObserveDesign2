#include <iostream>
#include "ConcreateSubject.h"
#include "ConcreteObserver.h"
#include "Subject.h"
#include "Observe.h"
using namespace std;

int main()
{
    //Create Subject
    ConcreteSubject cSubject= ConcreteSubject();
    ConcreteSubject *pSubject = &cSubject;

    //Create Observer
    Observer *pObserver = new ConcreteObserver(pSubject);
    Observer *pObserver2 = new ConcreteObserver2(pSubject);

    //change the state
    pSubject->SetState(2);

    //Register the observer
    pSubject->Attach(pObserver);
    pSubject->Attach(pObserver2);

    pSubject->Notify();

    // Unregister the observer
    pSubject->Detach(pObserver);

    pSubject->SetState(3);
    pSubject->Notify();

    delete pObserver;
    delete pObserver2;
    delete pSubject;
}
