#pragma once
#include <iostream>
using namespace std;


class Pastel
{
public:
    string type;
    Pastel(){}
    ~Pastel(){}
    
    
    virtual string getType()
    {
        return this->type;
    }
    
    virtual Pastel* clonar() = 0;
    
    virtual void batido()
    {
        cout<<"Batiendo masa del pastel"<<endl;
    }
    
    virtual void amasado()
    {
        cout<<"Amasando masa del pastel"<<endl;
    }
    
    virtual void horneado()
    {
        cout<<"horneando pastel"<<endl;
    }
    
    virtual void decorado()
    {
        cout<<"Agregando decoraciones al pastel"<<endl;
    }
    
    virtual void empacado()
    {
        cout<<"Empacando pastel"<<endl;
    }
    
    
};