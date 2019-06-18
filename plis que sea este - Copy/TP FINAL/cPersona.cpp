

#include "cPersona.h"


cPersona::cPersona()
{
	codigo = "";
	parada = "";
	silla_ruedas = NULL;
}

cPersona::cPersona(int codigo, string parada, bool silla_ruedas)
{
	this->codigo = codigo;
	this->parada = parada;
	this->silla_ruedas = silla_ruedas;
}


string cPersona::get_Parada()
{

	return  NULL;
}


string cPersona::Prioridad_Indicador(bool l)
{

	return  NULL;
}


void cPersona::set_Parada(string l)
{

}


cPersona::~cPersona()
{

}