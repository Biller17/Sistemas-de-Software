#pragma once 


class Director
{

private:
	Builder* builder;

public:
	Director();
	void setBuilder(Builder* bd)
	{
		builder = bd;
	}

	Avion* getAvion()
	{
		return builder->getAvion();
	}

	void construct()
	{
		builder->createAvion();
		builder->buildModelo();
		builder->buildNumSerie();
		builder->buildNumSerie();
		builder->buildMarca();
		builder->buildAlas();
		builder->buildMotor();
	}
	
};