#pragma once
#include "Desktop.h"
#include "Laptop.h"
#include "Netbook.h"
#include "Tablet.h"

/*Adrian Biller A01018940
Tarea 1 fabrica de computadoras*/

class Producto
{
public:
    
    Producto(){}
    
    virtual Computadora* crear(string) = 0;
    
    Computadora* realizarProceso(string type)
    {
        Computadora* newProduct = crear(type);
        newProduct->componentSelection();
        newProduct->componentAssembly();
        newProduct->software();
        newProduct->packaging();
        return newProduct;
    }
    
};