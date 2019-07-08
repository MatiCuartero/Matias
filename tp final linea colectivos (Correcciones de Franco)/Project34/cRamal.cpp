#include "cRamal.h"



cRamal::cRamal()
{
	nombre = "";
}

cRamal::cRamal(string nombre, cParada *parada1, cParada *parada2, cParada *parada3, cParada *parada4, cParada *parada5)
{
	this->nombre = nombre;
	//Por cada Ramal que me cree voy a tener una lista diferente con las paradas del ramal respectivamente.
	ListaParadas->operator+[parada1];
	ListaParadas->operator+[parada2];
	ListaParadas->operator+[parada3];
	ListaParadas->operator+[parada4];
	ListaParadas->operator+[parada5];
}


cRamal::~cRamal()
{
	//si llega a estar bien lo de el get lista
	//hay que hacerla apuntar al destructor de la listaT (template)

}
