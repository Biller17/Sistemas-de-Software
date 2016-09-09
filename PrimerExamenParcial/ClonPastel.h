#pragma once 
#include "Pastel.h"


template <class Base, class Sublclase>
class ClonPastel : public Base
{
public:
    virtual Base* clonar()
    {
        return new Sublclase(dynamic_cast<Sublclase&>(*this));
    }
    
};