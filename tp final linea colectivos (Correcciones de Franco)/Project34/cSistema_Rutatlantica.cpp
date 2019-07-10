#include "cSistema_Rutatlantica.h"



cSistema_Rutatlantica::cSistema_Rutatlantica()
{
	ListaParadas = new cListaT<cParada>();
	ListaPersona = new cListaT<class cPersona>();
	lista_colectivos = new cListaT<class cColectivo>();


}


void cSistema_Rutatlantica::agregar_colectivos()
{
	int total_colectivos;
	int cv,cn,ca;
	cout << "Ingrese la cantidad de colectivos viejos:" << endl,
	cin >> cv;
	cout << "Ingrese la cantidad de colectivos nuevos: " << endl;
	cin >> cn;
	cout << "Ingrese la cantidad de colectivos Acordeon:" << endl;
	cin >> ca;
	
	total_colectivos = ca + cv + cn;
	
	for (int i = 0; i < total_colectivos; i++)
	{
		for (int j = 0; j < cv; j++)
		{
			lista_colectivos->operator+(new cColectivo_viejo());

		}
		


	}
	
	/*lista_colectivos->operator+(new cColectivo_nuevo("AG-JI-34", true, ramal1, true, true));
	lista_colectivos->operator+(new cColectivo_nuevo("AS-JT-77", true, ramal2, true, true));
	lista_colectivos->operator+(new cColectivo_nuevo("AS-JY-33", true, ramal3, true, true);
	lista_colectivos->operator+(new cColectivo_viejo("BB-GG-77", true, ramal2, false, false));
	lista_colectivos->operator+(new cColectivo_viejo("BR-GT-89", true, ramal1, false, false));
	lista_colectivos->operator+(new cColectivo_viejo("BF-GL-11", true, ramal3, false, false));
	lista_colectivos->operator+(new cColectivo_viejo("BQ-GM-99", true, ramal1, false, false));
	lista_colectivos->operator+(new cAcordeon("AF-RT-45", true, ramal2, true, true));
	lista_colectivos->operator+(new cAcordeon("AS-FE-22", true, ramal3, true, true));
	lista_colectivos->operator+(new cAcordeon("AL-FD-55", true, ramal2, true, true));*/
}


void cSistema_Rutatlantica::agregar_paradas()
{	//hacen la lista de paradas
	//crean los ramales

	ListaParadas->operator+(new cParada(1, "Salta y Rivadavia", "Constitucion"));
	ListaParadas->operator+(new cParada(2, "Junin y Av. Las Heras", "Recoleta"));
	ListaParadas->operator+(new cParada(3, "Plaza Italia", "Palermo"));
	ListaParadas->operator+(new cParada(4, "Av. Cabildo y Av. Juramento", "Cabildo y Juramento"));
	ListaParadas->operator+(new cParada(5, "Puente Saavedra", "Puente Saavedra"));
	ListaParadas->operator+(new cParada(6, "Panamericana y Laprida", "Panamericana y Laprida"));
	ListaParadas->operator+(new cParada(7, "Panamericana y Ugarte", "Panamericana y Ugarte"));
	ListaParadas->operator+(new cParada(8, "Fleming y Edison", "Fleming y Edison"));
	ListaParadas->operator+(new cParada(9, "Rolon y Marquez", "Boulonge Sur Mer"));

	ramal1 = new cRamal("Ramal1", ListaParadas->getItem[1], ListaParadas->getItem[3], ListaParadas->getItem[5], ListaParadas->getItem[7], ListaParadas->getItem[9]);
	ramal2 = new cRamal("Ramal2", ListaParadas->getItem[9], ListaParadas->getItem[8], ListaParadas->getItem[6], ListaParadas->getItem[4], ListaParadas->getItem[1]);
	ramal3 = new cRamal("Ramal3", ListaParadas->getItem[9], ListaParadas->getItem[7], ListaParadas->getItem[5], ListaParadas->getItem[2], ListaParadas->getItem[1]);
}



//cada 1 minuto actualiza el estado de los objetos
void cSistema_Rutatlantica::TICK_Estado() 
{
	int p = 0, r = 0;
	int cont_silla_ruedas = 0;
	
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
		

	//Creo peronas en Paradas Segun tipo de Ramal:

	//Para Ramal1
	for (int i = 1; i <= N; i++)
	{
		if (ramal1->getLista()->getItem[i]->getCodigo() == i)
		{
			for (int t = colectivo->getParada_Actual()->getCodigo(); i <= N; i++)
			{
				r = rand() % colectivo->getParada_Actual()->getCodigo() - N;

				if (ramal1->getLista()->getItem(i)->getCodigo == r)
				{
					//creo personas random en paradas.
				}
			}
		}
	}

	//Para Ramal2
	for (int i = 9; i >= 1; i--)
	{
		if (ramal2->getLista()->getItem[i]->getCodigo == i)
		{
			for (int t = colectivo->getParada_Actual()->getCodigo(); i >= 1; i--)
			{
				r = rand() % colectivo->getParada_Actual()->getCodigo() - 1;

				if (ramal1->getLista()->getItem[i]->getCodigo == r)
				{
					//creo personas random en paradas.
				}
			}
		}
	}

	//Para Ramal3
	for (int i = 9; i >= 1; i--)
	{
		if (ramal3->getLista()->getItem[i]->getCodigo == i)
		{
			for (int t = colectivo->getParada_Actual()->getCodigo(); i >= 1; i--)
			{
				r = rand() % colectivo->getParada_Actual()->getCodigo() - 1;

				if (ramal1->getLista()->getItem[i]->getCodigo == r)
				{
					//creo personas random en paradas.
				}
			}
		}
	}


	for (int i = 1; i <= N; i++)
	{
		if (ramal1->getLista()->getItem[i]->getCodigo == i)
		{
			p = rand() % M;

			for (int k = 0; k <= p; k++)
			{
				cont_silla_ruedas++;
				r = rand() % N;

				/////Condicion para que solo cree personas en las paradas de cada ramal con un destino dentro del mismo ramal.
				//RAMAL1
				if (ramal1->getLista()->getItem(i)->getCodigo() == i)
				{
					for (int t = 1; t <= N; t++)
					{
						if (ramal1->getLista()->getItem[t]->getCodigo() == r)
						{
							////?????
						}
					}
					if (cont_silla_ruedas == 5)
					{
						//que reciba por parametro la persona todo
						ListaParadas->getItem[i]->Llenar_Listas(new cPersona(ListaParadas->getItem[r]->getNombre, true));
						cont_silla_ruedas = 0;
					}
					else
					{
						ListaParadas->getItem(i)->Llenar_Listas(new cPersona(ListaParadas->getItem[r]->getNombre, false));
					}
				}
			}

			//RAMAL2
			if (ramal2->getLista()->getItem[i]->getCodigo() == i)
			{
				if (cont_silla_ruedas == 5)
				{
					//que reciba por parametro la persona todo
					ListaParadas->getItem[i]->Llenar_Listas(new cPersona(ListaParadas->getItem[r]->getNombre, true));
					cont_silla_ruedas = 0;
				}
				else
				{
					ListaParadas->getItem[i]->Llenar_Listas(new cPersona(ListaParadas->getItem[r]->getNombre, false));
				}
			}

			//RAMAL3
			if (ramal3->getLista()->getItem[i]->getCodigo() == i)
			{
				if (cont_silla_ruedas == 5)
				{
					//que reciba por parametro la persona todo
					ListaParadas->getItem[i]->Llenar_Listas(new cPersona(ListaParadas->getItem[r]->getNombre, true));
					cont_silla_ruedas = 0;
				}
				else
				{
					ListaParadas->getItem[i]->Llenar_Listas(new cPersona(ListaParadas->getItem[r]->getNombre, false));
				}
			}
		}
	}


		for (int i = 1; i <= N; i++)
		{
			int cantPersonas = rand() % M;

			int cont_silla_ruedas = 0;

			for (int j = 0; j <= cantPersonas; j++)
			{

					// ListaParadas->getItem(i)->getListaPersonas->AgregarItem(new cPersona(ListaParadas[y]->getNombre(), true))

					//Random para generar destino 
					int y = rand() % 1 - 9;
					cont_silla_ruedas++;

					if (ramal1->getLista()->getItem[i]->getCodigo() == y)
					{
						if (cont_silla_ruedas == 5)
						{
							//que reciba por parametro la persona todo
							ListaParadas->getItem(i)->Llenar_Listas(new cPersona(ListaParadas->getItem[y]->getNombre, true));
							cont_silla_ruedas = 0;
							cPersona *persona = new cPersona(ListaParadas[y]->getNombre(), true);
							ListaPersona->AgregarItem(persona);
							parada->Llenar_Listas(persona);
						}
						else
						{
							ListaParadas->getItem(i)->Llenar_Listas(new cPersona(ListaParadas->getItem(y)->getNombre, false));
							//cPersona *persona = new cPersona(ListaParadas[y]->getNombre(), false);
							//ListaPersona->AgregarItem(persona);
							//parada->Llenar_Listas(persona);
						}
					}

					if (ramal2->getLista()->getItem(i)->getCodigo() == y)
						if (cont_silla_ruedas == 5)
						{
							//que reciba por parametro la persona todo
							ListaParadas->getItem(i)->Llenar_Listas(new cPersona(ListaParadas->getItem(y)->getNombre, true));
							cont_silla_ruedas = 0;
							//cPersona *persona = new cPersona(ListaParadas[y]->getNombre(), true);
							//ListaPersona->AgregarItem(persona);
							//parada->Llenar_Listas(persona);
						}
						else
						{
							ListaParadas->getItem(i)->Llenar_Listas(new cPersona(ListaParadas->getItem(y)->getNombre, false));
							//cPersona *persona = new cPersona(ListaParadas[y]->getNombre(), false);
							//ListaPersona->AgregarItem(persona);
							//parada->Llenar_Listas(persona);
						}

					//cListaT<class cPersona> persona->getitem(i)->getListaPersonas()->agregarItem(new cPersona())
			}
		}
		

	//hacer para la lista entera de colectivos
		colectivo->Abrir_Puerta();
		colectivo->Asignar_Nuevo_Ramal(ramal1, ramal2, ramal3);
		colectivo->Bajar_Personas();
		colectivo->Subir_Personas();
		colectivo->Cobrar_Boleto();

		system("pause");
}

//cada 5 minutos actualiza la posicion de los colectivos
	/*void cSistema_Rutatlantica::TICK_GPS()
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
*/


//va a subir o no pasajeros con sillas de ruedas
void cSistema_Rutatlantica::subir_pasajeros()
{

	for (int i = 0; i < 10; i++)
	{

		cColectivo_viejo*v = dynamic_cast<cColectivo_viejo*>(lista_colectivos->getItem[i]);
		cAcordeon*c = dynamic_cast<cAcordeon*>(lista_colectivos->getItem(i));
		cColectivo_nuevo*n = dynamic_cast<cColectivo_nuevo*>(lista_colectivos->getItem[i]);
		
	
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
	lista_colectivos->~cListaT;
	colectivo = NULL;
	ListaPersona->~cListaT;
	ListaParadas->~cListaT;
	persona = NULL;
	parada = NULL;
	ramal1 = NULL;
	ramal2 = NULL;
	ramal3 = NULL;
}





