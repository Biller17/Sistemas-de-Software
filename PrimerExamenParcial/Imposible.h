#pragma once 
#include "ClonPastel.h"


class Imposible : public ClonPastel<Pastel, Imposible>
{
    
public:
    Imposible()
    {
        this->type = "Pastel imposible";
    }
    
    
};