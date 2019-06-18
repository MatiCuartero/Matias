#include "cSistema_Rutatlantica.h"


cSistema_Rutatlantica::cSistema_Rutatlantica()
{
	parada1 = new cParada("1", "Salta y Rivadavia", "Constitucion");
	parada2 = new cParada("2", "Junin y Av. Las Heras", "Recoleta");
	parada3 = new cParada("3", "Plaza Italia", "Palermo");
	parada4 = new cParada("4", "Cabildo y Juramento", "Av. Cabildo y Av. Juramento");
	parada5 = new cParada("5", "Puente Saavedra", "Puente Saavedra");
	parada6 = new cParada("6", "Panamericana y Laprida", "Panamericana y Laprida");
	parada7 = new cParada("7", "Panamericana y Ugarte", "Panamericana y Ugarte");
	parada8 = new cParada("8", "Fleming y Edison", "Fleming y Edison");
	parada9 = new cParada("9", "Rolon y Marquez", "");
	parada10 = new cParada("10", "", "");
	parada11 = new cParada("11", "", "");
	parada12 = new cParada("12", "", "");
	parada13 = new cParada("13", "", "");
	parada14 = new cParada("14", "", "");
	parada15 = new cParada("15", "", "");

	colectivo = new cColectivo();
	ramal1 = new cRamal(parada1, parada2, parada3, parada4, parada5);
	ramal2 = new cRamal();//poner otras paradas
	ramal3 = new cRamal();

	parada = new cParada();
	ListaParadas = new cParada[N];

	ListaParadas[0] = *parada1;


/*	parada->Llenar_Listas(parada1);
	parada->Llenar_Listas(parada2);
	parada->Llenar_Listas(parada3);
	parada->Llenar_Listas(parada4);
	parada->Llenar_Listas(parada5);
	parada->Llenar_Listas(parada6);
	parada->Llenar_Listas(parada7);
	parada->Llenar_Listas(parada8);
	parada->Llenar_Listas(parada9);
	parada->Llenar_Listas(parada10);
	parada->Llenar_Listas(parada11);
	parada->Llenar_Listas(parada12);
	parada->Llenar_Listas(parada13);
	parada->Llenar_Listas(parada14);
	parada->Llenar_Listas(parada15);*/




	cListaT<class cPersona> *persona;
	
}


int cSistema_Rutatlantica::cant_Personas()
{

	for (int i = 0; i < N; i++)
	{
		int cantPersonas = rand() % M;
		//que reciba por parametro la persona todo
		///
		for (int j = 0; j < cantPersonas; j++)
		{
			//Hacer random para generar destino
			int y = rand() % 1 - 5;
		
			//if(ListaParadas[i]==y)
			if (ListaParadas() == y)
			{

			}
			//cListaT<class cPersona> persona->getitem(i)->getListaPersonas()->agregarItem(new cPersona())

		}


	}

	return 0;
}


double cSistema_Rutatlantica::monto_porColectivo()
{

	return 0;
}

//cada 1 minuto actualiza el estado de los objetos
void cSistema_Rutatlantica::TICK_Estado() 
{
		clock_t comienzo;
		double duracion;
		double tiempoEspera;

		cout << "Ingrese el tiempo que desea esperar: ";
		cin >> tiempoEspera;
		comienzo = clock();
		duracion = (clock() - comienzo) / (double) CLOCKS_PER_SEC;

		while (tiempoEspera>duracion) {
			duracion = (clock() - comienzo) / (double)CLOCKS_PER_SEC;
		}

		system("pause");

}

//cada 5 minutos actualiza la posicion de los colectivos
void cSistema_Rutatlantica::TICK_GPS()
{

	clock_t comienzo;
	double duracion;
	double tiempoEspera;

	cout << "Ingrese el tiempo que desea esperar: ";
	cin >> tiempoEspera;
	comienzo = clock();
	duracion = (clock() - comienzo) / (double)CLOCKS_PER_SEC;

	while (tiempoEspera>duracion) {
		duracion = (clock() - comienzo) / (double)CLOCKS_PER_SEC;
	}

	system("pause");

}

/*void cSistema_Rutatlantica::Llenar_Listas()
{
	int TAM = N;
	//ListaParadas = new cParada[TAM];
	//ListaParadas = NULL;

	/*for (int i = 0; i < TAM; i++)
	{
		ListaParadas[i] = NULL;
	}*/

	//int ca = 0;

	/*for (int i = 0; i < TAM; i++)
	{
		if (ca < TAM)
		{
			ListaParadas[i] = *parada1;

		}
	}
	
	if (ca < N)
	{
		ListaParadas[0] = *parada1;


	}

}*/


double cSistema_Rutatlantica::total_cant_monto()
{

	return 0;
}


int cSistema_Rutatlantica::total_cant_Personas()
{

	return 0;
}

void cSistema_Rutatlantica::setRamales()
{
}

string cSistema_Rutatlantica::getParada()
{
	return string();
}


cSistema_Rutatlantica::~cSistema_Rutatlantica()
{
	//destrcutor
}
