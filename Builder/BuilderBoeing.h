#include "Builder.h"


class BuilderBoeing : public Builder
{
	void buildAlas()
	{
		Alas* wings = new Alas();
		wings->setMarca("Boeing");
		avion->setAlas(wings);
	}

	void buildMotor()
	{
		Motor* mot = new Motor();
		mot->setPotencia(3500);
		avion->setMotor(mot);
	}

	

};