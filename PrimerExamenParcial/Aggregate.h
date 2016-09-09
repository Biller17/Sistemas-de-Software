#pragma once 
#include <iostream>
#include "IteratorCake.h"


#include "IteratorCake.h"
template <class T>
class Aggregate
{
    
public:
    T*list;
    
    void addElement(T element)
    {
        list[pos++] = element;
    }
    
    T getElement(int position)
    {
        return list[position];
    }

    IteratorCake<T> getIterator()
    {
        return new IteratorCake<T>(*this);
    }
    
    
private:
    int size = 100;
    int pos = 0;
    
    
};