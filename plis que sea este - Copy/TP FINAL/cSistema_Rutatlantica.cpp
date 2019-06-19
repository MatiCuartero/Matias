#include "cSistema_Rutatlantica.h"


cSistema_Rutatlantica::cSistema_Rutatlantica()
{
	parada1 = new cParada(1, "Salta y Rivadavia", "Constitucion"); //parada[i]->getcod()==rand if == ...
	parada2 = new cParada(2, "Junin y Av. Las Heras", "Recoleta");
	parada3 = new cParada(3, "Plaza Italia", "Palermo");
	parada4 = new cParada(4, "Cabildo y Juramento", "Av. Cabildo y Av. Juramento");
	parada5 = new cParada(5, "Puente Saavedra", "Puente Saavedra");
	parada6 = new cParada(6, "Panamericana y Laprida", "Panamericana y Laprida");
	parada7 = new cParada(7, "Panamericana y Ugarte", "Panamericana y Ugarte");
	parada8 = new cParada(8, "Fleming y Edison", "Fleming y Edison");
	parada9 = new cParada(9, "Rolon y Marquez", "");
	parada10 = new cParada(10, "", "");
	parada11 = new cParada(11, "", "");
	parada12 = new cParada(12, "", "");
	parada13 = new cParada(13, "", "");
	parada14 = new cParada(14, "", "");
	parada15 = new cParada(15, "", "");

	colectivo = new cColectivo();

	ramal1 = new cRamal(parada1, parada2, parada3, parada4, parada5);
	ramal2 = new cRamal(parada6, parada7, parada8, parada9, parada10);//poner otras paradas
	ramal3 = new cRamal(parada11, parada12, parada13, parada14, parada15);

	//parada = new cParada();
	ListaPersona = new cListaT<class cPersona>();


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
}


int cSistema_Rutatlantica::cant_Personas()
{

	for (int i = 1; i < N; i++)
	{
		int cantPersonas = rand() % M;
		//que reciba por parametro la persona todo
		int cont_silla_ruedas = 0;
		
		for (int j = 0; j < cantPersonas; j++)
		{
			//Random para generar destino y si va en silla de ruedas o no
			int y = rand() % 1 - 15;
			cont_silla_ruedas++;

			if (cont_silla_ruedas == 5)
			{
				cPersona *persona = new cPersona(ListaParadas[y]->getNombre(), true);
				ListaPersona->AgregarItem(persona);
				cont_silla_ruedas = 0;
			}
			else
			{
				cPersona *persona = new cPersona(ListaParadas[y]->getNombre(), false);
				ListaPersona->AgregarItem(persona);
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

void cSistema_Rutatlantica::Llenar_Listas()
{
	int TAM = N;
	*ListaParadas = new cParada[TAM];
	ListaParadas = NULL;

	for (int i = 0; i < TAM; i++)
	{
		ListaParadas[i] = NULL;
	}

	//En el [0] no hay nada, la informacion empieza desde el [1] !!OJO, CUIDADO!!
	ListaParadas[1] = parada1;
	ListaParadas[2] = parada2;
	ListaParadas[3] = parada3;
	ListaParadas[4] = parada4;
	ListaParadas[5] = parada5;
	ListaParadas[6] = parada6;
	ListaParadas[7] = parada7;
	ListaParadas[8] = parada8;
	ListaParadas[9] = parada9;
	ListaParadas[10] = parada10;
	ListaParadas[11] = parada11;
	ListaParadas[12] = parada12;
	ListaParadas[13] = parada13; 
	ListaParadas[14] = parada14;
	ListaParadas[15] = parada15;
}


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
