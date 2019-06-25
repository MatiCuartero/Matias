

#include "cPersona.h"

int cPersona::cont_codigo = 0;
cPersona::cPersona()
{
	codigo = 1;
	parada = "";
	silla_ruedas = true;
	cont_codigo++;
}

int cPersona::cont_codigo = 1;

cPersona::cPersona( int _codigo, string parada, bool silla_ruedas)
{

	cont_codigo++;
	this->parada = parada;
	this->silla_ruedas = silla_ruedas;
	codigo = cont_codigo;
}


string cPersona::get_Parada()
{

	return  NULL;
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

}

int cPersona::get_contador()
{
	return cont_codigo;
}
