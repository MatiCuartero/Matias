#include "cParada.h"


cParada::cParada(int _cod, string _dir, string _nom): nombre(_nom)
{
	codigo_identificativo = _cod;
	direccion = _dir;
}

cParada::cParada() : nombre("")
{
	codigo_identificativo = 0;
	direccion = "";
	ListaPersonas = new cPersona[N];
	ListaPersonas = NULL;
}

void cParada::Llenar_Listas(cPersona *persona)
{
	int TAM = N;

	int ca = 0;

	if (ca < TAM)
	{
		ListaPersonas[ca++] = *persona;
	}
}

/*cParada cParada::getListaParadas() 
{
	return *ListaParadas;
}*/


cParada::~cParada()
{
	//destructor
}

cPersona cParada::getListaPersonas()
{	
	return *ListaPersonas;
}
