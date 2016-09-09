#pragma once
#include "Producto.h"


class ConcreteProducto : public Producto
{
public:
    static Pastel* crear(string type)
    {
        if(type == "tresLeches")
        {
            TresLeches* t = new TresLeches();
            proceso(t);
            return t;
        }
        else if (type == "sacher")
        {
            Sacher* s = new Sacher();
            proceso(s);
            return s;
        }
        else if (type == "imposible")
        {
            Imposible* i = new Imposible();
            proceso(i);
            return i;
        }
        else{
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