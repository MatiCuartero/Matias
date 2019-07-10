
#include "cAcordeon.h"


cAcordeon::cAcordeon()
{
	CA = 0;
	CAPMAX = D;
	ramal = new cRamal();
}

cAcordeon::cAcordeon(int _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion) :cColectivo_nuevo(_codigo, _estado, ramal, _aire, _direccion)
{
	

}


void cAcordeon::Asignar_Nuevo_Ramal(cRamal *ramal1, cRamal *ramal2,cRamal *ramal3)
{
	//hereda el metodo de la clase padre
}


int cAcordeon::Bajar_Personas()
{
	//hereda el metodo de la clase padre	
}


double cAcordeon::Cobrar_Boleto()
{
	//hereda el metodo de la clase padre
}


void cAcordeon::SistemaGPS()
{
	//hereda el metodo de la clase padre
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
	//hereda el metodo de la clase padre	
}


int cAcordeon::get_CAPMAX()
{
	//hereda el metodo de la clase padre
}

void cAcordeon::Rotura()
{
	//hereda el metodo de la clase padre
}

void cAcordeon::imprimir_info()
{
	//HACER OTRA COSA O SACARLO
	cout << "Soy un colectivo acordeon de la linea 60" << endl;
}

cAcordeon::~cAcordeon()
{
	ramal=NULL;
}


//EMPIEZO CON UN PUNTERO DE UN OBJETO HIJ0(PRIMERO ACORDEON , SEGUNDO COLECTIVO NUEVO ,TERCERO COLECTIVO VIEJO)
//HACER LA LISTA EN PARADAS, AGREGAR
