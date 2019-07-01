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
	persona = new cListaT<cPersona>();
}

void cParada::Llenar_Listas(cPersona *persona)
{
	this->persona->AgregarItem(persona);
}


cParada::~cParada()
{
	//destructor
}

cPersona cParada::getListaPersonas()
{	
	return *ListaPersonas;
}
