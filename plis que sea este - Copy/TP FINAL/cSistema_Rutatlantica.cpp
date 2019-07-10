#include "cSistema_Rutatlantica.h"
#include <ctime>


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
	


	ramal1 = new cRamal("Ramal1",parada1, parada3, parada5, parada7, parada9);
	ramal2 = new cRamal("Ramal2", parada9, parada8, parada6, parada4, parada1);
	ramal3 = new cRamal("Ramal3", parada9, parada7, parada5, parada2, parada1);

	
	ListaPersona = new cListaT<class cPersona>();
	lista_colectivos = new cListaT<class cColectivo>();

}

//este metodo va a gregar a la lista_colectivos mis colectivos,nuevos,viejos y acordeon
void cSistema_Rutatlantica::agregar_colectivos()
{
	lista_colectivos->AgregarItem(colectivo1 = new cColectivo_nuevo("AG-JI-34", true, ramal1, true, true));
	lista_colectivos->AgregarItem(colectivo2 = new cColectivo_nuevo("AS-JT-77", true, ramal2, true, true));
	lista_colectivos->AgregarItem(colectivo3 = new cColectivo_nuevo("AS-JY-33", true, ramal3, true, true);
	lista_colectivos->AgregarItem(colectivo4 = new cColectivo_viejo("BB-GG-77", true, ramal2, false, false));
	lista_colectivos->AgregarItem(colectivo5 = new cColectivo_viejo("BR-GT-89", true, ramal1, false, false));
	lista_colectivos->AgregarItem(colectivo6 = new cColectivo_viejo("BF-GL-11", true, ramal3, false, false));
	lista_colectivos->AgregarItem(colectivo7 = new cColectivo_viejo("BQ-GM-99", true, ramal1, false, false));
	lista_colectivos->AgregarItem(colectivo8 = new cAcordeon("AF-RT-45", true, ramal2, true, true));
	lista_colectivos->AgregarItem(colectivo9 = new cAcordeon("AS-FE-22", true, ramal3, true, true));
	lista_colectivos->AgregarItem(colectivo10 = new cAcordeon("AL-FD-55", true, ramal2, true, true));


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

			for (int j = 0; j <= cantPersonas; j++)
			{
				//Random para generar destino 
				int y = rand() % 1 - 9;

				cont_silla_ruedas++;

				if (cont_silla_ruedas == 5)
				{
					//que reciba por parametro la persona todo
					cPersona *persona = new cPersona(ListaParadas[y]->getNombre(), true);
					ListaPersona->AgregarItem(persona);
					parada->Llenar_Listas(persona);
					cont_silla_ruedas = 0;
				}
				else
				{
					cPersona *persona = new cPersona(ListaParadas[y]->getNombre(), false);
					ListaPersona->AgregarItem(persona);
					parada->Llenar_Listas(persona);
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

void cSistema_Rutatlantica::agregar_personas()
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

}



//va a subir o no pasajeros con sillas de ruedas
void cSistema_Rutatlantica::subir_pasajeros()
{


	for (int i = 0; i < 10; i++)
	{

		cColectivo_viejo*v = dynamic_cast<cColectivo_viejo*>((*lista_colectivos)[i]);
		cAcordeon*c = dynamic_cast<cAcordeon*>(lista_colectivos->getItem(i));
		cColectivo_nuevo*n = dynamic_cast<cColectivo_nuevo*>((*lista_colectivos)[i]);
		
	
		{	if(c!=NULL)
			c->Subir_Personas();
			cout << "Se permiten subir pasajeros con sillas de ruedas en el colectivo acordeon" << endl;

		}

		
		if (n != NULL)

		{
			n->Subir_Personas();
			cout << "Se permiten subir pasajeros con sillas de ruedas en el colectivo tipo nuevo" << endl;
		}

		else
		{	
			v->Subir_Personas();
			cout << "El colectivo viejo no permite subir pasajeron con sillas de ruedas " << endl;
		}

	}
	

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

	/*for (int j = 0; j < M; j++)
	{
		if (ListaPersona[j] != NULL)
		{
			ListaPersona[j] = NULL;
		}

	}
	delete[]ListaPersona;*/
	
}






