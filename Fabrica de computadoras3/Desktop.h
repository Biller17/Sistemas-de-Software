#include "ClonComputadora.h"
/*Adrian Biller A01018940 
Tarea 1 fabrica de computadoras*/
class Desktop : public ClonComputadora<Computadora,Desktop>
{
    friend class ConcreteProducto;
    
public:
    
    void componentSelection()
    {
        cout<<"Selecing desktop components"<<endl;
    }
    
    void componentAssembly()
    {
        cout<<"Assembling desktop components"<<endl;
        
    }
    void software()
    {
        cout<<"Installing desktop's software"<<endl;
    }
    void packaging()
    {
        cout<<"Packing desktop"<<endl<<endl;
    }
    
    Desktop()
    {
        this->type = "Desktop";
    }
};