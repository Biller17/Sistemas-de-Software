#include "Computadora.h"
/*Adrian Biller A01018940 
Tarea 2 fabrica de computadoras con singleton*/
class Laptop : public Computadora
{
    friend class ConcreteProducto;
    
public:
    

    void componentSelection()
    {
        cout<<"Selecing laptop components"<<endl;
    }
    
    void componentAssembly()
    {
        cout<<"Assembling laptop components"<<endl;
        
    }
    void software()
    {
        cout<<"Installing laptop's software"<<endl;
    }
    void packaging()
    {
        cout<<"Packing laptop"<<endl<<endl;
    }
    
    
    
private:
    
    Laptop()
    {
        this->type = "Laptop";
    }
};
