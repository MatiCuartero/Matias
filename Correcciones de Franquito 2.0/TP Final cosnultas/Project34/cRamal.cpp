#include "cRamal.h"
#include "cParada.h"
#include "cListaT.h"


cRamal::cRamal()
{
//////////agregar algo/////////////
	nombre = "";
}

cRamal::cRamal(string nombre, cParada *parada1, cParada *parada2, cParada *parada3, cParada *parada4, cParada *parada5)
{
	/*this->parada1 = parada1;
	this->parada2 = parada2;
	this->parada3 = parada3;
	this->parada4 = parada4;
	this->parada5 = parada5;*/

	//Por cada Ramal que me cree voy a tener una lista diferente con las paradas del ramal respectivamente.
	*ListaParadas+parada1;
	*ListaParadas+parada2;
	*ListaParadas+parada3;
	*ListaParadas+parada4;
	*ListaParadas+parada5;
}


cRamal::~cRamal()
{
}
