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
	ListaPersonas = new cListaT<cPersona>();
}

void cParada::Llenar_Listas(cPersona *persona)
{
	ListaPersonas->operator+(persona);
}


cParada::~cParada()
{
	//destructor
}

