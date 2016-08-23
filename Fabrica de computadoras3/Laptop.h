#include "ClonComputadora.h"
/*Adrian Biller A01018940 
Tarea 1 fabrica de computadoras*/
class Laptop : public ClonComputadora<Computadora, Laptop>
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
