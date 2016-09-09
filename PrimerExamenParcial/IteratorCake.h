#pragma once 
#include "Aggregate.h"

template <class T>
class IteratorCake
{
public:
    IteratorCake(Aggregate<T>* list)
    {
        this->list = list;
        index = 0;
    }
    
    T next()
    {
        if(hasNext())
            return list->list[index++];
        else
            return NULL;
    }
    
    bool hasNext()
    {
        return(index < list->getSize());
    }
    
private:
    IteratorCake(){}
    Aggregate<T>* list;
    int index;
    
    
};