#include "ClonComputadora.h"
/*Adrian Biller A01018940 
Tarea 1 fabrica de computadoras*/
class Tablet : public ClonComputadora<Computadora, Tablet>
{

    friend class ConcreteProducto;
    
public:

    
    void componentSelection()
    {
        cout<<"Selecing tablet components"<<endl;
    }
    
    void componentAssembly()
    {
        cout<<"Assembling tablet components"<<endl;
        
    }
    void software()
    {
        cout<<"Installing tablet's software"<<endl;
    }
    void packaging()
    {
        cout<<"Packing tablet"<<endl<<endl;
    }
    
private:
    
    Tablet()
    {
        this->type = "Tablet";
    }
    
    
    
};