
#include "cColectivo.h"

cColectivo::cColectivo()
{
	CA = 0;
	CAPMAX = 60;
	//precio = 0;
	ramal = new cRamal();
	Estado = true;
	Parada_Actual = new cParada();
	*Lista_Personas = new cPersona();
}

cColectivo::cColectivo(const string _codigo, bool _estado, cRamal * ramal): codigo(_codigo)
{
	Estado = _estado;
	this->ramal = ramal;
}

void cColectivo::Asignar_Nuevo_Ramal(cRamal * ramal1, cRamal * ramal2, cRamal * ramal3)
{
	if (ramal->getNombre() == ramal1->getNombre() && Parada_Actual->getCodigo() == ramal1->getLista()[4]->getCodigo())
	{
		int y = rand() % 2 - 3;
		if (y == 2)
			ramal = ramal2;
		else
			ramal = ramal3;
	}

	if (ramal->getNombre() == ramal2->getNombre() && Parada_Actual->getCodigo() == ramal2->getLista()[4]->getCodigo()) 
	{
		ramal = ramal1;
	}

	if (ramal->getNombre() == ramal3->getNombre() && Parada_Actual->getCodigo() == ramal3->getLista()[4]->getCodigo())
	{
		ramal = ramal1;
	}

	/*if (Parada_Actual->getCodigo() == ramal1->getLista[4]->getCodigo())
	{

	}*/
}

double cColectivo::Cobrar_Boleto()
{

	for (int i = 0; i < 5; i++)
	{
		ramal->getLista()[i]->getListaPersonas[i];

		for (int j = 0; j < M; j++);
		{
			Parada_Actual->getNombre();


			//queremos cobrar el boleto segun la persona que esta en la parada actual hasta su destino
			//entonces hacemos un contador si esta el destino de la persona en el ramal
			//a tantos contadores, tanta plata. 


			//no sabemos como hacer que nos sume 1 al contador desde la parada actual hasta la de destino.
		}
	}
	return 0.0;
}

void cColectivo::SistemaGPS()
{
	//tengo que comparar segun que ramal tenga(1, 2, 3) y hacer que este en la primer parada de ese ramal y actualizarlo cada 5 min.
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






bool cColectivo::Verificar_Capacidad()
{

	if (CA < CAPMAX)
	{
		return true;
	}


	else

	 throw new exception ("NO HAY LUGAR PARA SUBIR MAS PERSONAS");
		return false;


}
 virtual cColectivo::~cColectivo()//hay que agregar el virtual al destructor?
{
	cout << "destruyendo colectivo" << endl;
	delete Parada_Actual;
		delete Lista_Personas;
}



int cColectivo::get_CAPMAX()
{
	return CAPMAX;
}