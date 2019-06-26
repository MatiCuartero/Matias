
#include "cColectivo_viejo.h"


cColectivo_viejo::cColectivo_viejo()
{
	ramal = new cRamal();
}

cColectivo_viejo::cColectivo_viejo(const string _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion):cColectivo(_codigo,_estado,ramal)
{
	aire = _aire;
	direccion_hidraulica = _direccion;

}


void cColectivo_viejo::Subir_Personas()
{
	int ca = 0;

	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < M; j++)
		{
			if (Parada_Actual->getListaPersonas[j]->getDestino() == ramal->getLista[i]->getNombre() && Parada_Actual->getListaPersonas[j]->getSilla_ruedas() == true)
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

bool cColectivo_viejo::Verificar_Capacidad()
{
	if (CA < CAPMAX)

		return true;

	else
		return false;
}

cColectivo_viejo::~cColectivo_viejo()
{
	cout << "destruyendo colectivo viejo" << endl;
}

void cColectivo_viejo::imprimir_info()
{
	cout << "Soy un colectivo viejo" << endl;
	cout << "Si el colectivo tiene aire=1, si no =0" << endl;
	cout << "Aire:" << aire << endl;
	cout << "Direccion hidraulica:" << direccion_hidraulica << endl;

}

void cColectivo_viejo::set_CAPMAX(int capacidad)
{
	capacidad = 20;
	CAPMAX = capacidad;
}

int cColectivo_viejo::get_CAPMAX()
{
	return CAPMAX;
}
