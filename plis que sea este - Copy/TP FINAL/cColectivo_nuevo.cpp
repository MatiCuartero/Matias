#include "cColectivo_nuevo.h"

cColectivo_nuevo::cColectivo_nuevo()
{
	aire = true;
	direccion_electrica = true;
	ramal = new cRamal();
	CA = 0;
	CAPMAX = 0;

}

cColectivo_nuevo::cColectivo_nuevo(const string _codigo, bool _estado, cRamal * ramal,bool _aire,bool _direccion):cColectivo(_codigo,_estado,ramal)
{
	aire =_aire;
	direccion_electrica = _direccion;

}

void cColectivo_nuevo::Subir_Personas()
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



//colectivo->lista_personas->agregarItem(paradaActual->lista_personas->QuitarItem(i))


bool cColectivo_nuevo::Verificar_Capacidad()
{
	if (CA < CAPMAX)

		return true;

	else
		return false;
}

void cColectivo_nuevo::imprimir_info()
{
	cout << "Soy un colectivo nuevo " << endl;
}

void cColectivo_nuevo::set_CAPMAX(int capacidad) 
{
	capacidad = 30;
	CAPMAX = capacidad;
}

int cColectivo_nuevo::get_CAPMAX()
{
	return CAPMAX;
}

string cColectivo_nuevo::get_codigo() const
{
	return codigo;
}

cColectivo_nuevo::~cColectivo_nuevo()
{
	cout << "destruyendo el colectivo nuevo" << endl;
	delete ramal;
}
