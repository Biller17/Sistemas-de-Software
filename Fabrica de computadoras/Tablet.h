#include "Computadora.h"

class Tablet : public Computadora
{
public:
    Tablet(){}
    
    Tablet(int id)
    {
        this->id = id;
        this->type = "Tablet";
    }
    
};