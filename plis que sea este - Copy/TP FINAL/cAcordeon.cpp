
#include "cAcordeon.h"

cAcordeon::cAcordeon()
{
	CA = 0;
	CAPMAX = D;
}

cAcordeon::cAcordeon(const string _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion):cColectivo_nuevo(_codigo,_estado,ramal,_aire,_direccion)
{

}




void cAcordeon::Asignar_Nuevo_Ramal()
{

}


int cAcordeon::Bajar_Personas()
{

}


double cAcordeon::Cobrar_Boleto(string destino)
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
			if (Parada_Actual->getListaPersonas[j]->getDestino() == ramal->getLista[i]->getNombre())
			{
				Lista_Personas[ca] = Parada_Actual->getListaPersonas[i]->quitar(Parada_Actual->getListaPersonas->getCodigo());
				ca++;
			}
		}
	}
	
}


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

}



////////PARA USAR DYNAMIC CAST DEBERIA USAR EL METODO DE SUBIR PERSONAS
//EL COELCTVIO VIAJO NO DEBERIA DEJAR SUBIR A PERSONAS EN SILLA DE RUEDAS
//EMPIEZO CON UN PUNTERO DE UN OBJETO HIJ0(PRIMERO ACORDEON , SEGUNDO COLECTIVO NUEVO ,TERCERO COLECTIVO VIEJO)
//HACER LA LISTA EN PARADAS, AGREGAR
