

#include "cPersona.h"


cPersona::cPersona():codigo(cont_codigo)
{
	cont_codigo++;
	destino = "";
	silla_ruedas = true;
}

int cPersona::cont_codigo = 1;

cPersona::cPersona(string destino, bool silla_ruedas):codigo(cont_codigo)
{
	cont_codigo++;
	this->destino = destino;
	this->silla_ruedas = silla_ruedas;
}


string cPersona::Prioridad_Indicador(bool l)
{

	return  NULL;
}

int cPersona::getCont_Codigo()
{
	return cont_codigo;
}

int cPersona::cont_codigo = 0;



void cPersona::set_Parada(string l)
{

}


cPersona::~cPersona()
{
	cont_codigo--;
}