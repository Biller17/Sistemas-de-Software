#pragma once
#include "Producto.h"

/*Adrian Biller A01018940 
Tarea 2 fabrica de computadoras con singleton*/

class ConcreteProducto : public Producto
{
    
public:
    
    Computadora* crear(string type)
    {
        if(type  == "desktop")
        {
            Desktop* d = new Desktop;
            return d;
            
        }
        else if (type == "laptop")
        {
            Laptop* l = new Laptop;
            return l;
            
        }
        else if(type == "netbook")
        {
            Netbook* n = new Netbook;
            return n;
        }
        else if(type == "tablet")
        {
            Tablet* t  = new Tablet;
            return t;
        }
        else
        {
            return NULL;
        }
    }
    
    
    static ConcreteProducto* getInstance()
    {
        static ConcreteProducto* instancia = new ConcreteProducto();
        return instancia;
    }
    
    
private:
    
    ConcreteProducto(){}
    
    
};