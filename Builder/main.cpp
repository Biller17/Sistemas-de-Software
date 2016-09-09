#include "Director.h"


int main()
{
	Director* dir = new Director();
	dir->setBuilder(new BuilderBoeing());
	dir->construct();

	Avion* prueba = dir->getAvion();
	cout<<prueba->getMarca();

}