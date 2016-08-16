#include "Computadora.h"
/*Adrian Biller A01018940 
Tarea 1 fabrica de computadoras*/
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