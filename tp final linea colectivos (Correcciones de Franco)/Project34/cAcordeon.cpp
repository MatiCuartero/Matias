
#include "cAcordeon.h"
#include <stdlib.h>

cAcordeon::cAcordeon()
{
	CA = 0;
	CAPMAX = D;
	ramal = new cRamal();
}

cAcordeon::cAcordeon(int _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion):cColectivo_nuevo(_codigo,_estado,ramal,_aire,_direccion)
{


}


void cAcordeon::Asignar_Nuevo_Ramal(cRamal *ramal1, cRamal *ramal2,cRamal *ramal3)
{
	if (ramal->getNombre() == ramal1->getNombre() && Parada_Actual->getCodigo() == ramal1->getLista()->getItem(9)->getCodigo())
	{
		int y = rand() % (2-3);
		if (y == 2)
			ramal = ramal2;
		else
			ramal = ramal3;
	}

	if (ramal->getNombre() == ramal2->getNombre() && Parada_Actual->getCodigo() == ramal2->getLista()->getItem(1)->getCodigo())
	{
		ramal = ramal1;
	}

	if (ramal->getNombre() == ramal3->getNombre() && Parada_Actual->getCodigo() == ramal3->getLista()->getItem(1)->getCodigo())
	{
		ramal = ramal1;
	}
}


int cAcordeon::Bajar_Personas()
{
	
}


double cAcordeon::Cobrar_Boleto()
{


}


void cAcordeon::SistemaGPS()
{

	
}


void cAcordeon::Subir_Personas()
{
	int ca = 0;

	for (int i = 0; i < 5; i++)//no son 10
	{

		for (int j = 0; j < M; j++)
		{
			if (Parada_Actual->getListaPersonas[j]->getDestino() == ramal->getLista()[i]->getNombre() && Parada_Actual->getListaPersonas[j]->getSilla_ruedas() == true)
			{
				Lista_Personas[ca] = Parada_Actual->getListaPersonas[i]->quitar(Parada_Actual->getListaPersonas->getCodigo());
				ca++;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < M; j++)
		{
			if (Parada_Actual->getListaPersonas[j]->getDestino() == ramal->getLista()[i]->getNombre())
			{
				Lista_Personas[ca] = Parada_Actual->getListaPersonas[i]->quitar(Parada_Actual->getListaPersonas->getCodigo());
				ca++;
			}
		}
	}
	
}

//agregar el try cath
bool cAcordeon::Verificar_Capacidad()
{
	if (CA < CAPMAX)

		return true;

	else
		return false;
}


int cAcordeon::get_CAPMAX()
{
	return CAPMAX;
}



cAcordeon::~cAcordeon()
{
	ramal=NULL;
}



////////PARA USAR DYNAMIC CAST DEBERIA USAR EL METODO DE SUBIR PERSONAS
//EL COELCTVIO VIAJO NO DEBERIA DEJAR SUBIR A PERSONAS EN SILLA DE RUEDAS
//EMPIEZO CON UN PUNTERO DE UN OBJETO HIJ0(PRIMERO ACORDEON , SEGUNDO COLECTIVO NUEVO ,TERCERO COLECTIVO VIEJO)
//HACER LA LISTA EN PARADAS, AGREGAR
