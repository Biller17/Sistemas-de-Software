#include "Computadora.h"

class Desktop : public Computadora
{
public:
    Desktop(){}
    
    Desktop(int id)
    {
        this->id = id;
        this->type = "Desktop";
    }
    
};