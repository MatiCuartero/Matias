
#include "cColectivo.h"

cColectivo::cColectivo()
{
	CA = 0;
	CAPMAX = 60;
	precio = 0;
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

	/*if (Parada_Actual->getCodigo() == ramal1->getLista[4]->getCodigo())
	{

	}*/
}

double cColectivo::Cobrar_Boleto(string l)
{
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

/*void cColectivo::setParada_Actual(cRamal *ramal)
{
	for (int i = 0; i < 5; i++)
	{
		if (ramal->getLista[i]->getCodigo() == 1)
		{

		}
	}
	
}*/


int cColectivo::Subir_Personas()
{





}


bool cColectivo::Verificar_Capacidad()
{

	if (CA < CAPMAX)
	{


	


	}


	else

	 throw new exception ("NO HAY LUGAR PARA SUBIR MAS PERSONAS");
		return false;


}
cColectivo::~cColectivo()//hay que agregar el virtual al destructor?
{
	cout << "destruyendo colectivo" << endl;
}



int cColectivo::get_CAPMAX()
{
	return CAPMAX;
}

///SOLO USAR EL COUT PARA SOBRECARGA
//CONST T   (CONST INT Y)

