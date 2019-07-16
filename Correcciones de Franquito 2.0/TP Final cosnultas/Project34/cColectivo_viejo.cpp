#include "cColectivo_viejo.h"
#include "cRamal.h"
#include "cParada.h"
#include "cListaT.h"
#include "cPersona.h"

cColectivo_viejo::cColectivo_viejo()
{
	ramal = new cRamal();
	CA = 0;
	CAPMAX = L;
}

cColectivo_viejo::cColectivo_viejo(const string _codigo, bool _estado, cRamal *ramal, bool _aire, bool _direccion):cColectivo(_codigo,_estado,ramal)
{
	aire = _aire;
	direccion_hidraulica = _direccion;
}

void cColectivo_viejo::Asignar_Nuevo_Ramal()
{
	Asignar_Nuevo_Ramal();
}

int cColectivo_viejo::Bajar_Personas()
{
	return Bajar_Personas();
}



float cColectivo_viejo::Cobrar_Boleto()
{
	return Cobrar_Boleto();
}

void cColectivo_viejo::SistemaGPS()
{
	SistemaGPS();
}

void cColectivo_viejo::Subir_Personas()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < M; j++)
		{

			if (Parada_Actual->getListaPersonas()->getItem(j)->getDestino() == (*ramal->getLista())[i]->getNombre() && (*Parada_Actual->getListaPersonas())[j]->getSilla_ruedas() == true)
			{
				ListaPersona->operator+(Parada_Actual->getListaPersonas()->Quitar(j));
			}
		}
	}
}

bool cColectivo_viejo::Verificar_Capacidad()//para verificar necesito las personas que ya estan en el colectivo para comparar con mi capacidad maxima dependiendo del tipo
{
	return Verificar_Capacidad();
}



void cColectivo_viejo::imprimir_info()
{
	cout << "Soy un colectivo viejo" << endl;
	cout << "Si el colectivo tiene aire=1, si no =0" << endl;
	cout << "Aire:" << aire << endl;
	cout << "Direccion hidraulica:" << direccion_hidraulica << endl;
}


void cColectivo_viejo::Rotura()
{
	Rotura();
}


int cColectivo_viejo::get_CAPMAX()
{
	return get_CAPMAX();
}

cColectivo_viejo::~cColectivo_viejo()
{
	cout << "destruyendo colectivo viejo" << endl;
	ramal = NULL;
}