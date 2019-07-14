#include "cColectivo.h"


int cColectivo::contador_codigo = 0;

cColectivo::cColectivo(const string _codigo, bool _estado, cRamal *ramal) : codigo(_codigo)
{
	contador_codigo++;
	Estado = _estado;
	this->ramal = ramal;
}

cColectivo::cColectivo() : codigo("")
{
	CA = 0;
	CAPMAX = 60;
	CantidadPersonas = 0;
	ramal = new cRamal();
	Estado = true;
	contador_codigo++;
	Parada_Actual = new cParada();
	ListaPersona = new cListaT<cPersona>();
}


<<<<<<< HEAD
cColectivo::cColectivo(const int codigo, bool _estado, cRamal * ramal)//faltaba hacer este si no me equivoco, sino saquenlo
{
	contador_codigo++;
	Estado = _estado;
	this->ramal = ramal;
}

void cColectivo::Asignar_Nuevo_Ramal(cRamal *ramal1, cRamal *ramal2, cRamal *ramal3)
=======
//CORREGIR.
void cColectivo::Asignar_Nuevo_Ramal(cRamal *_ramal)
>>>>>>> 23b67fe552bdbaea02b22b34bffd0c661c5c88d4
{
	int y = 0;
	//Colectivo pasa del ramal 1 al 2 o el 3.
	if (ramal->getLista[5]->getCodigo() == 9 && ramal->getNombre() != _ramal->getNombre())
	{
		y = rand() % 2 - 3;

		if (y == 2 && _ramal->getNombre() == "Ramal2")
			ramal = _ramal;
		else
			ramal = _ramal;
	}

	if (ramal->getLista[9]->getCodigo() == 9 && ramal->getNombre() != _ramal->getNombre())
	{
		ramal = _ramal;
	}
}

void cColectivo::Bajar_Personas()
{
	for (int j = 0; j <= Parada_Actual->getListaPersonas()->getCA(); j++)
	{
		//if (Parada_Actual->getListaPersonas()->getItem(j)->getDestino() == Parada_Actual->getNombre())
		if (Parada_Actual->getListaPersonas[j]->getDestino() == Parada_Actual->getNombre())
		{
			Parada_Actual->getListaPersonas()->Quitar(j);
		}
	}	
}


float cColectivo::Cobrar_Boleto()
{
	int posActual = 0, posDestino = 0, distancia = 0;

	for (int i = 0; i < 9; i++)
	{	
		if (Parada_Actual->getCodigo() == ramal->getLista()->getItem(i)->getCodigo()) 
		{
			posActual = i;
		}
		
		for (int j = 0; j <= Parada_Actual->getListaPersonas()->getCA(); j++)
		{

<<<<<<< HEAD
			if (Parada_Actual->getListaPersonas()->getItem[j]->getDestino() == ramal->getLista[j]->getItem[i]->getNombre())

			if (Parada_Actual->getListaPersonas()->getItem[j]->getDestino() == ramal->getLista()->getItem[i]->getNombre())
=======
			if (Parada_Actual->getListaPersonas()->getItem(j)->getDestino() == ramal->getLista[i]->getNombre())

			if (Parada_Actual->getListaPersonas()->getItem(j)->getDestino() == ramal->getLista()->getItem(j)->getNombre())

>>>>>>> 23b67fe552bdbaea02b22b34bffd0c661c5c88d4
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
	//return NULL;
}

void cColectivo::SistemaGPS()
{
	//tengo que comparar segun que ramal tenga(1, 2, 3) y hacer que este en la primer parada de ese ramal y actualizarlo cada 5 min.
	if (ramal->getNombre() == "Ramal1")
	{
		Parada_Actual = ramal->getLista()->getItem(1);
	}

	if (ramal->getNombre() == "Ramal2")
	{
		Parada_Actual = ramal->getLista()->getItem(9);
	}

	if (ramal->getNombre() == "Ramal3")
	{
		Parada_Actual = ramal->getLista()->getItem(9);
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
				Parada_Actual = ramal->getLista()->getItem(i);
		}
	}
	
	//Para Ramal2
	if (ramal->getNombre() == "Ramal2")
	{
		for (int i = 8; i >= 1; i++)
		{
			if (ramal->getLista()->getItem[i]->getCodigo() == i)
				Parada_Actual = ramal->getLista()->getItem(i);
		}
	}

	//Para Ramal3
	if (ramal->getNombre() == "Ramal3")
	{
		for (int i = 7; i >= 1; i++)
		{
			if (ramal->getLista()->getItem(i)->getCodigo() == i)
				Parada_Actual = ramal->getLista()->getItem(i);
		}
	}

	Rotura();//Llamo a la funcion para actualizar el cont_rotura y una vez que llegue a 5 que se rompa el bondi.
}


bool cColectivo::Verificar_Capacidad()
{
	if (ListaPersona->getCA() < CAPMAX)
		return true;
	else
		throw new exception("NO HAY LUGAR PARA SUBIR MAS PERSONAS");
	return false;
}

cParada* cColectivo::getParada_Actual()
{
	return Parada_Actual;
}


void cColectivo::Rotura()
{
	cont_rotura++;
	
	if (cont_rotura == 5)
	{
		Estado = false;
		Bajar_Personas();
		Parada_Actual = ramal->getLista()->BuscarItem(9);//ramal 1
		Parada_Actual = ramal->getLista()->BuscarItem(1);//ramal 2
		Parada_Actual = ramal->getLista()->BuscarItem(1);//ramal 3
	}
}

<<<<<<< HEAD
=======
cColectivo:: ~cColectivo()//hay que agregar el virtual al destructor?
{
	 Parada_Actual = NULL;
	 ramal = NULL;
	 ListaPersona->~cListaT();
	 contador_codigo--;
	 //Cuando compilo salta el error: "Severity	Code Description	Project	File	Line	Suppression State Error	C3866	destructor call missing argument list	TP FINAL(Correcciones Franco)	c:\users\fede\desktop\favaloro\labo prog\tp final\github\maticuartero\matias\tp final linea colectivos(correcciones de franco)\project34\ccolectivo.cpp	200
		 
}
>>>>>>> 23b67fe552bdbaea02b22b34bffd0c661c5c88d4


<<<<<<< HEAD
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



=======
>>>>>>> 23b67fe552bdbaea02b22b34bffd0c661c5c88d4
