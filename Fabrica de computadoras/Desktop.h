#include "Computadora.h"
/*Adrian Biller A01018940 
Tarea 1 fabrica de computadoras*/
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