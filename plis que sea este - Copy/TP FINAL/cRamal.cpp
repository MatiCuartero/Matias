#include "cRamal.h"



cRamal::cRamal()
{
//////////agregar algo/////////////
}

cRamal::cRamal(cParada *parada1, cParada *parada2, cParada *parada3, cParada *parada4, cParada *parada5)
{
	this->parada1 = parada1;
	this->parada2 = parada2;
	this->parada3 = parada3;
	this->parada4 = parada4;
	this->parada5 = parada5;

	*ListaParadas = new cParada[5];
	for (int i = 0; i < 5; i++)
	{
		ListaParadas[i] = NULL;
	}

	//Por cada Ramal que me cree voy a tener una lista diferente con las paradas del ramal respectivamente.
	ListaParadas[0] = this->parada1;
	ListaParadas[1] = this->parada2;
	ListaParadas[2] = this->parada3;
	ListaParadas[3] = this->parada4;
	ListaParadas[4] = this->parada5;
}

cParada cRamal::getLista()
{
	return **ListaParadas;
}


cRamal::~cRamal()
{
}
