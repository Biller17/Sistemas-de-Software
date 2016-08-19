#pragma once
#include <iostream>
#include <string.h>
/*Adrian Biller A01018940 
Tarea 2 fabrica de computadoras*/
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
    
    
    virtual void componentSelection() = 0;
    virtual void componentAssembly() = 0;
    virtual void software() = 0;
    virtual void packaging() = 0;
    
    
};