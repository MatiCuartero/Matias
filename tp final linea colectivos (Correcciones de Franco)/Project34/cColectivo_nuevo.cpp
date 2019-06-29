#include "cColectivo_nuevo.h"

cColectivo_nuevo::cColectivo_nuevo()
{
	aire = true;
	direccion_electrica = true;
	ramal = new cRamal();
	CA = 0;
	CAPMAX = M;

}

cColectivo_nuevo::cColectivo_nuevo(const string _codigo, bool _estado, cRamal * ramal,bool _aire,bool _direccion):cColectivo(_codigo,_estado,ramal)
{
	aire =_aire;
	direccion_electrica = _direccion;

}

void cColectivo_nuevo::SistemaGPS()
{
	int ca = 0;
	if (ramal->getNombre() == "Ramal1")
	{
		Parada_Actual = ramal->getLista[ca];
	}

	if (ramal->getNombre() == "Ramal2")
	{
		Parada_Actual = ramal->getLista[ca];
	}

	if (ramal->getNombre() == "Ramal3")
	{
		Parada_Actual = ramal->getLista[ca];
	}

	clock_t comienzo;
	double duracion;
	double tiempoEspera;

	cout << "Ingrese el tiempo que desea esperar: ";
	cin >> tiempoEspera;
	comienzo = clock();
	duracion = (clock() - comienzo) / (double)CLOCKS_PER_SEC;

	while (tiempoEspera > duracion) {
		duracion = (clock() - comienzo) / (double)CLOCKS_PER_SEC;
	}

	ca++;
	if (ramal->getNombre() == "Ramal1")
	{
		Parada_Actual = ramal->getLista[ca];
	}

	if (ramal->getNombre() == "Ramal2")
	{
		Parada_Actual = ramal->getLista[ca];
	}

	if (ramal->getNombre() == "Ramal3")
	{
		Parada_Actual = ramal->getLista[ca];
	}

}

void cColectivo_nuevo::Subir_Personas()
{
	int ca = 0;

	for (int i = 0; i < 5; i++)
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




ostream & operator<<(ostream & o, cColectivo_nuevo & colec)
{


	o << "El codigo del colectivo es:" << colec.codigo << endl;
	o << " El colectivo tiene aire :" << colec.aire << endl;
	o << "El colectivo tiene direccion electrica" << colec.direccion_electrica << endl;
	o << "El colectivo tiene capacidad para" << colec.CAPMAX << "personas " << endl;
	return o;

}
