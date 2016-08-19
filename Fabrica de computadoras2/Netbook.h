#include "Computadora.h"
/*Adrian Biller A01018940 
Tarea 2 fabrica de computadoras con singleton*/
class Netbook : public Computadora
{
    friend class ConcreteProducto;
    
public:
    
    void componentSelection()
    {
        cout<<"Selecing netbook components"<<endl;
    }
    
    void componentAssembly()
    {
        cout<<"Assembling netbook components"<<endl;
        
    }
    void software()
    {
        cout<<"Installing netbook's software"<<endl;
    }
    void packaging()
    {
        cout<<"Packing netbook"<<endl<<endl;
    }
    
    
private:
    
    Netbook()
    {
        this->type = "Netbook";
    }
    
};