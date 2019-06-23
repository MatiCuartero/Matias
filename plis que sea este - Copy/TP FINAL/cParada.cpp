#include "cParada.h"


cParada::cParada(int _cod) :codigo_identificativo(_cod)
{
	direccion = "";
}

cParada::cParada(int _cod, string _dir, string _nom): codigo_identificativo(_cod), nombre("")
{
	direccion = _dir;
}

/*void cParada::Llenar_Listas(cParada * parada)
{
	int TAM = N;
	ListaParadas = new cParada[TAM];
	ListaParadas = NULL;

	for (int i = 0; i < TAM; i++)
	{
		ListaParadas[i] = NULL;
	}

	int ca = 0;

	if (ca < TAM)
	{
		ListaParadas[ca++] = *parada;
	}
}*/

/*cParada cParada::getListaParadas() 
{
	return *ListaParadas;
}*/


cParada::~cParada()
{
	//destructor
}

cParada getListaParadas()
{
	return *ListaParadas;
}
