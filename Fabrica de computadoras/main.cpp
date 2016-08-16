#include "Producto.h"


int main ()
{
     //hacer funciones estaticas clase::funcion()
    Computadora* Desk = Producto::crear("desktop", 1);
    Computadora* lap =  Producto::crear("laptop", 2);
    Computadora* net =  Producto::crear("netbook", 3);
    Computadora* tab = Producto::crear("tablet", 4);
    
    
}