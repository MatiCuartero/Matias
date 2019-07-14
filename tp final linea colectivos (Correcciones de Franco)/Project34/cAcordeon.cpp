
#include "cAcordeon.h"


cAcordeon::cAcordeon()
{
	CA = 0;
	CAPMAX = D;
}

cAcordeon::cAcordeon(const string _codigo, bool _estado, cRamal *ramal, bool _aire, bool _direccion):cColectivo_nuevo(_codigo, _estado, ramal, _aire, _direccion)
{

}

/*cAcordeon::cAcordeon(int _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion) : cColectivo_nuevo(_codigo, _estado, ramal, _aire, _direccion)
{

}*/


void cAcordeon::Asignar_Nuevo_Ramal()
{
	//hereda el metodo de la clase padre
}


int cAcordeon::Bajar_Personas()
{
	//hereda el metodo de la clase padre	
}


float cAcordeon::Cobrar_Boleto()
{

	//hereda el metodo de la clase padre

	return Cobrar_Boleto();

}


void cAcordeon::SistemaGPS()
{
	//hereda el metodo de la clase padre

	SistemaGPS();

}


void cAcordeon::Subir_Personas()
{
	for (int i = 0; i < 5; i++)//no son 10

		for (int i = 0; i < 5; i++)

		{
			for (int j = 0; j < M; j++)
			{

				if (Parada_Actual->getListaPersonas[j]->getDestino() == ramal->getLista()[i]->getNombre() && Parada_Actual->getListaPersonas[j]->getSilla_ruedas() == true)

					if (Parada_Actual->getListaPersonas()->getItem(j)->getDestino() == ramal->getLista[i]->getNombre() && Parada_Actual->getListaPersonas[j]->getSilla_ruedas() == true)

					{
						ListaPersona + (Parada_Actual->getListaPersonas--(j));
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
	cout << "Soy un colectivo acordeon" << endl;
	cout << "Si el colectivo tiene aire = 1, si no = 0" << endl;
	cout << "Aire:" << aire << endl;
	cout << "Direccion hidraulica:" << direccion_electrica << endl;
}

cAcordeon::~cAcordeon()
{

}


//EMPIEZO CON UN PUNTERO DE UN OBJETO HIJ0(PRIMERO ACORDEON , SEGUNDO COLECTIVO NUEVO ,TERCERO COLECTIVO VIEJO)
//HACER LA LISTA EN PARADAS, AGREGAR
