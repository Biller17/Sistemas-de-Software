#include "Computadora.h"
/*Adrian Biller A01018940 
Tarea 2 fabrica de computadoras con singleton*/
class Desktop : public Computadora
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
    
    
private:
    
    Desktop()
    {
        this->type = "Desktop";
    }
};