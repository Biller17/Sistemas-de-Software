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
    
    
    static Computadora* crear(string type, int id)
    {
        if(type  == "desktop")
        {
            Desktop* d = new Desktop(id);
            d->print();
            return d;
            
        }
        else if (type == "laptop")
        {
            Laptop* l = new Laptop(id);
            l->print();
            return l;
            
        }
        else if(type == "netbook")
        {
            Netbook* n = new Netbook(id);
            n->print();
            return n;
        }
        else if(type == "tablet")
        {
            Tablet* t  = new Tablet(id);
            t->print();
            return t;
        }
        else
        {
            return NULL;
        }
    }
    
};