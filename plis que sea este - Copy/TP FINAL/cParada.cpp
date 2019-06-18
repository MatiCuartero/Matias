#include "cParada.h"



cParada::cParada():codigo_identificativo(""), nombre("")
{
	direccion = "";
}

cParada::cParada(string _cod, string _dir, string _nom)
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

	for (int i = 0; i < TAM; i++)
	{
		if (ca < TAM)
		{
			ListaParadas = parada;
		}
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
