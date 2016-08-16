#include "Computadora.h"

class Netbook : public Computadora
{
public:
    Netbook(){}
    
    Netbook(int id)
    {
        this->id = id;
        this->type = "Netbook";
    }
    
};