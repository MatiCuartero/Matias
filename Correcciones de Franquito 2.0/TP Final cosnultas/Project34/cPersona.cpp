#include "cPersona.h"

int cPersona::cont_codigo = 1;

cPersona::cPersona():codigo(cont_codigo)
{
	cont_codigo++;
	destino = "";
	silla_ruedas = true;
}

cPersona::cPersona(int codigo, string parada, bool silla_ruedas) :codigo(cont_codigo)
{
	cont_codigo++;
	this->destino = destino;
	this->silla_ruedas = silla_ruedas;
}



int cPersona::getCont_Codigo()
{
	return cont_codigo;
}



cPersona::~cPersona()
{
	cont_codigo--;
}