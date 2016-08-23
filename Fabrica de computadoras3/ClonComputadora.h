#pragma once
#include "Computadora.h"


template <class Base, class Subclase>
class ClonComputadora :public Base
{
public:
    virtual Base* clonar()
    {
        return new Subclase(dynamic_cast<Subclase&>(*this));
    }
};