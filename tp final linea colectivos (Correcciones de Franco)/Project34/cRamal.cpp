#include "cRamal.h"



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
	ListaParadas->AgregarItem(parada1);
	ListaParadas->AgregarItem(parada2);
	ListaParadas->AgregarItem(parada3);
	ListaParadas->AgregarItem(parada4);
	ListaParadas->AgregarItem(parada5);
}


cRamal::~cRamal()
{
}
