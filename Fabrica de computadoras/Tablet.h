#include "Computadora.h"
/*Adrian Biller A01018940 
Tarea 1 fabrica de computadoras*/
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