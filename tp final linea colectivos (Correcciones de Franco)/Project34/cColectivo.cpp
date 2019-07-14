#include "cColectivo.h"


int cColectivo::contador_codigo = 0;
cColectivo::cColectivo():codigo(0)
{
	CA = 0;
	CAPMAX = 60;
	ramal = new cRamal();
	Estado = true;
	contador_codigo++;
	Parada_Actual = new cParada();
	ListaPersona = new cListaT<cPersona>();
}

cColectivo::cColectivo(const string _codigo, bool _estado, cRamal * ramal)
{
	contador_codigo++;
	Estado = _estado;
	this->ramal = ramal;
}


cColectivo::cColectivo(const int codigo, bool _estado, cRamal * ramal)//faltaba hacer este si no me equivoco, sino saquenlo
{
	contador_codigo++;
	Estado = _estado;
	this->ramal = ramal;
}

void cColectivo::Asignar_Nuevo_Ramal(cRamal *ramal1, cRamal *ramal2, cRamal *ramal3)
{
	//if (ramal->getNombre() == ramal1->getNombre() && Parada_Actual->getCodigo() == ramal1->getLista()->getItem[9]->getCodigo())

	if (this->ramal->getNombre() == "Ramal1" && this->ramal->getNombre() != ramal->getNombre() && Parada_Actual->getCodigo() == 9)
	{
		int y = rand() % 2 - 3;
		if (y == 2 && ramal->getNombre() == "Ramal2")
			this->ramal = ramal;
		else
			this->ramal = ramal;
	}

	if (ramal->getNombre() == ramal2->getNombre() && Parada_Actual->getCodigo() == ramal2->getLista()->getItem[1]->getCodigo()) 
	{
		ramal = ramal1;
	}

	if (ramal->getNombre() == ramal3->getNombre() && Parada_Actual->getCodigo() == ramal3->getLista()->getItem[1]->getCodigo())
	{
		ramal = ramal1;
	}
}

void cColectivo::Bajar_Personas()
{
	for (int j = 0; j <= Parada_Actual->getListaPersonas()->getCA(); j++)
	{
		if (Parada_Actual->getListaPersonas()->getItem[j]->getDestino() == Parada_Actual->getNombre())
		{
			Parada_Actual->getListaPersonas()->operator--[j];
		}
	}	
}


float cColectivo::Cobrar_Boleto()
{
	int posActual = 0, posDestino = 0, distancia = 0;

	for (int i = 0; i < 9; i++)
	{	
		if (Parada_Actual->getCodigo() == ramal->getLista()->getItem[i]->getCodigo()) 
		{
			posActual = i;
		}
		
		for (int j = 0; j <= Parada_Actual->getListaPersonas()->getCA(); j++)
		{

			if (Parada_Actual->getListaPersonas()->getItem[j]->getDestino() == ramal->getLista[j]->getItem[i]->getNombre())

			if (Parada_Actual->getListaPersonas()->getItem[j]->getDestino() == ramal->getLista()->getItem[i]->getNombre())
			{
				posDestino = j;
				distancia = posDestino - posActual;
			}
		}
	}
		

	float precio;
	//Calculo el precio Segun Cuantas parads tenga hsat el destino la persona:
	if (distancia <= 3)
		precio = distancia * 5.5;
	else
		precio = distancia * 7.5;
	
	return precio;
}

void cColectivo::SistemaGPS()
{
	//tengo que comparar segun que ramal tenga(1, 2, 3) y hacer que este en la primer parada de ese ramal y actualizarlo cada 5 min.
	if (ramal->getNombre() == "Ramal1")
	{
		Parada_Actual = ramal->getLista()->getItem[1];
	}

	if (ramal->getNombre() == "Ramal2")
	{
		Parada_Actual = ramal->getLista()->getItem[9];
	}

	if (ramal->getNombre() == "Ramal3")
	{
		Parada_Actual = ramal->getLista()->getItem[9];
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


	//Asigno nueva parada Segun Ramal:
	
	//Para Ramal1
	if (ramal->getNombre() == "Ramal1")
	{
		for (int i = 3; i <= N; i++)
		{
			if (ramal->getLista()->getItem[i]->getCodigo() == i)
				Parada_Actual = ramal->getLista()->getItem[i];
		}
	}
	
	//Para Ramal2
	if (ramal->getNombre() == "Ramal2")
	{
		for (int i = 8; i >= 1; i++)
		{
			if (ramal->getLista()->getItem[i]->getCodigo() == i)
				Parada_Actual = ramal->getLista()->getItem[i];
		}
	}

	//Para Ramal3
	if (ramal->getNombre() == "Ramal3")
	{
		for (int i = 7; i >= 1; i++)
		{
			if (ramal->getLista()->getItem[i]->getCodigo() == i)
				Parada_Actual = ramal->getLista()->getItem[i];
		}
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


int cColectivo::get_CAPMAX()
{
	return CAPMAX;
}


void cColectivo::Rotura()
{
	int cont_rotura = 0;//el contador llega hasta 5
	int ult_parada;

	for (int i = 1; i < 9; i++)
	{
		if (Parada_Actual->getCodigo() == ramal->getLista()->getItem[i]->getCodigo())

		{
			cont_rotura++;
		}


		//ramal 1
		if (ramal->getNombre() == "Ramal1")
		{
			for (int i = 3; i <= N; i++)
			{
				if (ramal->getLista()->getItem[i]->getCodigo() == i)
					Parada_Actual = ramal->getLista()->getItem[9];
			}
		}

		//ramal 2
		if (ramal->getNombre() == "Ramal2")
		{
			for (int i = 8; i >= 1; i++)
			{
				if (ramal->getLista()->getItem[i]->getCodigo() == i)
					Parada_Actual = ramal->getLista()->getItem[1];
			}
		}

		//ramal 3
		if (ramal->getNombre() == "Ramal3")
		{
			for (int i = 7; i >= 1; i++)
			{
				if (ramal->getLista()->getItem[i]->getCodigo() == i)
					Parada_Actual = ramal->getLista()->getItem[1];
			}
		}


		if (cont_rotura == 5)
		{
			Estado = false;
			Bajar_Personas();
			Parada_Actual = ramal->getLista()->getItem[9];//ramal 1
			Parada_Actual = ramal->getLista()->getItem[1];//ramal 2
			Parada_Actual = ramal->getLista()->getItem[1];//ramal 3
		}

	}

}


int cColectivo::get_CAPMAX()
{
	return CAPMAX;
}

cParada * cColectivo::getParada_Actual()
{
	return Parada_Actual;
}


cColectivo:: ~cColectivo()//hay que agregar el virtual al destructor?
{
	 Parada_Actual = NULL;
	 ramal = NULL;
	 ListaPersona->~cListaT;
	 contador_codigo--;

}



