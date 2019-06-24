#include "cSistema_Rutatlantica.h"
#include <ctime>

//holahola
//arranco
cSistema_Rutatlantica::cSistema_Rutatlantica()
{
	parada1 = new cParada(1, "Salta y Rivadavia", "Constitucion"); 
	parada2 = new cParada(2, "Junin y Av. Las Heras", "Recoleta");
	parada3 = new cParada(3, "Plaza Italia", "Palermo");
	parada4 = new cParada(4, "Av. Cabildo y Av. Juramento", "Cabildo y Juramento");
	parada5 = new cParada(5, "Puente Saavedra", "Puente Saavedra");
	parada6 = new cParada(6, "Panamericana y Laprida", "Panamericana y Laprida");
	parada7 = new cParada(7, "Panamericana y Ugarte", "Panamericana y Ugarte");
	parada8 = new cParada(8, "Fleming y Edison", "Fleming y Edison");
	parada9 = new cParada(9, "Rolon y Marquez", "Boulonge Sur Mer");
	


	ramal1 = new cRamal(parada1, parada2, parada3, parada4, parada5);
	ramal2 = new cRamal(parada6, parada7, parada8, parada9, parada1);
	ramal3 = new cRamal(parada9, parada6, parada5, parada2, parada1);

	
	ListaPersona = new cListaT<class cPersona>();


}

//int::cSistema_Rutatlantica contTICKS=0;

int cSistema_Rutatlantica::cant_Personas()
{

	
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


		for (int i = 1; i <= N; i++)
		{
			int cantPersonas = rand() % M;

			int cont_silla_ruedas = 0;

			for (int j = 1; j <= cantPersonas; j++)
			{
				//Random para generar destino 
				int y = rand() % 1 - 15;

				cont_silla_ruedas++;

				if (cont_silla_ruedas == 5)
				{
					//que reciba por parametro la persona todo
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
		//hacer para la lista entera de colectivos
		colectivo->Abrir_Puerta();
		colectivo->Asignar_Nuevo_Ramal(ramal1, ramal2, ramal3);
		colectivo->Bajar_Personas();
		colectivo->Subir_Personas();
		colectivo->Cobrar_Boleto("");

		system("pause");
}

//cada 5 minutos actualiza la posicion de los colectivos
void cSistema_Rutatlantica::TICK_GPS()
{
	//Cada vez que yo llame a la funcion esta el colectivo avanza una posicion,  
	//entonces cuando haga 5 veces esta funcion voy a tener que tener que cambiar de ramal de manera random
	//para eso esta el contador este staic, que puede ser nomral, para hacer la condicion de que si es igual a 5,
	//haga el random para hacer el cambio de ramal a los colectivos

	//contTICKS++;

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
	//PROBLEMA DE QUE NO HAY CONSTRUCTOR POR DEFECTO POR ATRIBUTO CONST
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
	return ;
}


cSistema_Rutatlantica::~cSistema_Rutatlantica()
{
	for (int i = 0; i < N; i++)
	{
		if (ListaParadas[i] != NULL)
		{
			ListaParadas[i] = NULL;
		}
	}
	delete[]ListaParadas;
	//destrcutor
}
