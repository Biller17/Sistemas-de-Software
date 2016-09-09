#pragma once
#include "TresLeches.h"
#include "Sacher.h"
#include "Imposible.h"


class Producto
{
public:
    Producto(){}
    static Pastel* crear(string type){return NULL;}
    static void proceso(Pastel* p)
    {
        p->batido();
        p->amasado();
        p->horneado();
        p->decorado();
        p->empacado();
        cout<<p->getType()<<" creado!"<<endl;
    }
};
