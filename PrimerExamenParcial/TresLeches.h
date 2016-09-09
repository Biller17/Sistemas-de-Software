#pragma once
#include "ClonPastel.h"

class TresLeches : public ClonPastel<Pastel, TresLeches>
{
public:
    TresLeches()
    {
        this->type = "Pastel de tres leches";
    }
    
};