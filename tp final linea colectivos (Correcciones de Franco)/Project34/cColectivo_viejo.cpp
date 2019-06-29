
#include "cColectivo_viejo.h"


cColectivo_viejo::cColectivo_viejo()
{
	ramal = new cRamal();
	CA = 0;
	CAPMAX = L;
}

cColectivo_viejo::cColectivo_viejo(const string _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion):cColectivo(_codigo,_estado,ramal)
{
	aire = _aire;
	direccion_hidraulica = _direccion;

}

void cColectivo_viejo::Asignar_Nuevo_Ramal()
{
	if (ramal->getNombre() == ramal1->getNombre() && Parada_Actual->getCodigo() == ramal1->getLista[4]->getCodigo())
	{
		int y = rand() % 2 - 3;
		if (y == 2)
			ramal = ramal2;
		else
			ramal = ramal3;
	}

	if (ramal->getNombre() == ramal2->getNombre() && Parada_Actual->getCodigo() == ramal2->getLista[4]->getCodigo())
	{
		ramal = ramal1;
	}

	if (ramal->getNombre() == ramal3->getNombre() && Parada_Actual->getCodigo() == ramal3->getLista[4]->getCodigo())
	{
		ramal = ramal1;
	}
}


void cColectivo_viejo::SistemaGPS()
{
	int ca = 0;
	clock_t comienzo;
	double duracion;
	double tiempoEspera=5.5;


	comienzo = clock();
	duracion = (clock() - comienzo) / (double)CLOCKS_PER_SEC;

	while (tiempoEspera > duracion) {
		duracion = (clock() - comienzo) / (double)CLOCKS_PER_SEC;	
{
	
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

	
	ca++;

}

void cColectivo_viejo::Subir_Personas()
{
	int ca = 0;

	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < M; j++)
		{
			if (Parada_Actual->getListaPersonas()[j]->getDestino() == ramal->getLista[i]->getNombre() && Parada_Actual->getListaPersonas[j]->getSilla_ruedas() == true)
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

bool cColectivo_viejo::Verificar_Capacidad()//para verificar necesito las personas que ya estan en el colectivo para comparar con mi capacidad maxima dependiendo del tipo
{
	for(int i =0;i<   ,i++)

	if (CA < CAPMAX)

		return true;

	else
		return false;
}

cColectivo_viejo::~cColectivo_viejo()
{
	cout << "destruyendo colectivo viejo" << endl;
	delete ramal;
	delete Lista_Personas;
}

void cColectivo_viejo::imprimir_info()
{
	cout << "Soy un colectivo viejo" << endl;
	cout << "Si el colectivo tiene aire=1, si no =0" << endl;
	cout << "Aire:" << aire << endl;
	cout << "Direccion hidraulica:" << direccion_hidraulica << endl;

}



int cColectivo_viejo::get_CAPMAX()
{
	return CAPMAX;
}
