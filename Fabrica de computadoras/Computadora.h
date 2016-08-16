#pragma once
#include <iostream>
#include <string.h>
/*Adrian Biller A01018940 
Tarea 1 fabrica de computadoras*/
using namespace std;


class Computadora
{
protected:
    int id;
    string type;
    
public:
    Computadora(){}
    ~Computadora(){}
    virtual int getId()
    {
        return this->id;
    }
    
    virtual string getType()
    {
        return this->type;
    }
    
    virtual void print()
    {
        cout<<type<<" numero: "<<id<<endl;
        componentSelection();
        componentAssembly();
        software();
        packaging();
        
    }
    
    
    virtual void componentSelection()
    {
        cout<<"Selecting components"<<endl;
    }
    virtual void componentAssembly()
    {
        cout<<"Assembling components"<<endl;
    }
    virtual void software()
    {
        cout<<"Installing software"<<endl;
    }
    virtual void packaging()
    {
        cout<<"Packaging product"<<endl<<endl;
    }
    
    
};