#include "Computadora.h"

class Laptop : public Computadora
{
public:
    Laptop(){}
    
    Laptop(int id)
    {
        this->id = id;
        this->type = "Laptop";
    }
};
