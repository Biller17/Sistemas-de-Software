/*Adrian Biller A01018940
 Examen parcial*/


#include <iostream>
#include "ConcreteProducto.h"
#include "IteratorCake.h"
#include "Aggregate.h"

int main() {
    
    Pastel* i = ConcreteProducto::getInstance()->crear("imposible");
    
    Pastel* clon = i->clonar();
    return 0;
}
