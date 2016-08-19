#include "ConcreteProducto.h"
/*Adrian Biller A01018940 
Tarea 2 fabrica de computadoras con singleton*/

int main ()
{
    Computadora* lap = ConcreteProducto::getInstance()->realizarProceso("laptop");

    Computadora* desk = ConcreteProducto::getInstance()->realizarProceso("desktop");
    
    Computadora* net = ConcreteProducto::getInstance()->realizarProceso("netbook");
    
    Computadora* tab= ConcreteProducto::getInstance()->realizarProceso("tablet");
    
    

    
    
    
    
    
    
    
}