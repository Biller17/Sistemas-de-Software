#include "Computadora.h"
/*Adrian Biller A01018940 
Tarea 1 fabrica de computadoras*/
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
