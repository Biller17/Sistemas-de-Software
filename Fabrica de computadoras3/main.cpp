#include "ConcreteProducto.h"
/*Adrian Biller A01018940 
Tarea 1 fabrica de computadoras*/

int main ()
{
    Computadora* lap = ConcreteProducto::getInstance()->realizarProceso("laptop");

    Computadora* desk = ConcreteProducto::getInstance()->realizarProceso("desktop");
    
    Computadora* net = ConcreteProducto::getInstance()->realizarProceso("netbook");
    
    Computadora* tab= ConcreteProducto::getInstance()->realizarProceso("tablet");
    
    
    Computadora* pruebaClon = desk->clonar();
    pruebaClon->getType();
    
    
    

    
    
    
    
    
    
    
}