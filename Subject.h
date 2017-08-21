#ifndef SUBJECT_H_INCLUDED
#define SUBJECT_H_INCLUDED
#include "Observe.h"

class Subject{
public:
    virtual void Attach(Observer *) = 0;
    virtual void Detach(Observer *) = 0;
    virtual void Notify() = 0;
};

#endif // SUBJECT_H_INCLUDED
