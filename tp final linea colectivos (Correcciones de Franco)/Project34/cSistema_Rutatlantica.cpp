#include "cSistema_Rutatlantica.h"

//8 ERRORES.

cSistema_Rutatlantica::cSistema_Rutatlantica()
{
	/*parada1 = new cParada(1, "Salta y Rivadavia", "Constitucion"); 
	parada2 = new cParada(2, "Junin y Av. Las Heras", "Recoleta");
	parada3 = new cParada(3, "Plaza Italia", "Palermo");
	parada4 = new cParada(4, "Av. Cabildo y Av. Juramento", "Cabildo y Juramento");
	parada5 = new cParada(5, "Puente Saavedra", "Puente Saavedra");
	parada6 = new cParada(6, "Panamericana y Laprida", "Panamericana y Laprida");
	parada7 = new cParada(7, "Panamericana y Ugarte", "Panamericana y Ugarte");
	parada8 = new cParada(8, "Fleming y Edison", "Fleming y Edison");
	parada9 = new cParada(9, "Rolon y Marquez", "Boulonge Sur Mer");*/

	/*ramal1 = new cRamal();
	ramal2 = new cRamal();
	ramal3 = new cRamal();*/
	
	ListaParadas = new cListaT<cParada>(9);
	ListaPersona = new cListaT<class cPersona>();
	lista_colectivos = new cListaT<class cColectivo>();
}

int cSistema_Rutatlantica::cant_Personas()
{
	return 0;
}

//este metodo va a gregar a la lista_colectivos mis colectivos,nuevos,viejos y acordeon. 
//ERROR.
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
			//lista_colectivos->operator+(new cColectivo_viejo());
		}
	}
	
	/*lista_colectivos->operator+(new cColectivo_nuevo("AG-JI-34", true, ramal1, true, true));
	lista_colectivos->operator+(new cColectivo_nuevo("AG-JI-34", true, ramal1, true, true));
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
{
	*ListaParadas+new cParada(1, "Salta y Rivadavia", "Constitucion");
	*ListaParadas+new cParada(2, "Junin y Av. Las Heras", "Recoleta");
	*ListaParadas+new cParada(3, "Plaza Italia", "Palermo");
	*ListaParadas+new cParada(4, "Av. Cabildo y Av. Juramento", "Cabildo y Juramento");
	*ListaParadas+new cParada(5, "Puente Saavedra", "Puente Saavedra");
	*ListaParadas+new cParada(6, "Panamericana y Laprida", "Panamericana y Laprida");
	*ListaParadas+new cParada(7, "Panamericana y Ugarte", "Panamericana y Ugarte");
	*ListaParadas+new cParada(8, "Fleming y Edison", "Fleming y Edison");
	*ListaParadas+new cParada(9, "Rolon y Marquez", "Boulonge Sur Mer");

	//CHEQUEAR.
	ramal1 = new cRamal("Ramal1", ListaParadas->BuscarItem(1), ListaParadas->BuscarItem(3), ListaParadas->BuscarItem(5), ListaParadas->BuscarItem(7), ListaParadas->BuscarItem(9));
	ramal2 = new cRamal("Ramal2", (*ListaParadas)[9], (*ListaParadas)[8], (*ListaParadas)[6], (*ListaParadas)[4], (*ListaParadas)[1]);
	ramal3 = new cRamal("Ramal3", (*ListaParadas)[9], (*ListaParadas)[7], (*ListaParadas)[5], (*ListaParadas)[2], (*ListaParadas)[1]);
}



//Actializo el estado de todos los objetos.
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
		
	//FALTA EL FOR CON EL RANGO DE PERSONAS A AGREGAR DADO POR EL RANDOM.
			//TENGO QUE RECORRER LA LISTA DE COLECTIVOS ENTERA PARA SABER EN QEU POSICION ESTA CADA COLECTIVO.
	//Creo peronas en Paradas Segun tipo de Ramal:
	//REVISAR...
	//Para Ramal1
	/*for (int i = 1; i <= N; i++)
	{
		if (ramal1->getLista[i]->getCodigo() == i)
		{				
			//for (int t = colectivo->getParada_Actual()->getCodigo(); i <= N; i++)
			
			{
				r = rand() % colectivo->getParada_Actual()->getCodigo() - N;

				if (ramal1->getLista[i]->getCodigo() == r)
				{
					//creo personas random en paradas.
				}
			}
		}
	}

	//Para Ramal2
	for (int i = 9; i >=1; i--)
	{
		if (ramal2->getLista()->getItem(i)->getCodigo() == i)
		{
			for (int t = colectivo->getParada_Actual()->getCodigo(); i >= 1; i--)
			{
				r = rand() % colectivo->getParada_Actual()->getCodigo() - 1;

				if (ramal1->getLista()->getItem(i)->getCodigo() == r)
				{
					//creo personas random en paradas.
				}
			}
		}
	}

	//Para Ramal3
	for (int i = 9; i >= 1; i--)
	{
		if (ramal3->getLista()->getItem(i)->getCodigo() == i)
		{
			for (int t = colectivo->getParada_Actual()->getCodigo(); i >= 1; i--)
			{
				r = rand() % colectivo->getParada_Actual()->getCodigo() - 1;

				if (ramal1->getLista()->getItem(i)->getCodigo() == r)
				{
					//creo personas random en paradas.
				}
			}
		}
	}*/




	/*for (int i = 1; i <= N; i++)
	{
		if (ramal1->getLista()->getItem(i)->getCodigo == i)
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
						if (ramal1->getLista()->getItem(t)->getCodigo() == r)
						{

						}
					}
					if (cont_silla_ruedas == 5)
					{
						//que reciba por parametro la persona todo
						ListaParadas->getItem(i)->Llenar_Listas(new cPersona(ListaParadas->getItem(r)->getNombre, true));
						cont_silla_ruedas = 0;
					}
					else
					{
						ListaParadas->getItem(i)->Llenar_Listas(new cPersona(ListaParadas->getItem(r)->getNombre, false));
					}
				}
			}

			//RAMAL2
			if (ramal2->getLista()->getItem(i)->getCodigo() == i)
			{
				if (cont_silla_ruedas == 5)
				{
					//que reciba por parametro la persona todo
					ListaParadas->getItem(i)->Llenar_Listas(new cPersona(ListaParadas->getItem(r)->getNombre, true));
					cont_silla_ruedas = 0;
				}
				else
				{
					ListaParadas->getItem(i)->Llenar_Listas(new cPersona(ListaParadas->getItem(r)->getNombre, false));
				}
			}

			//RAMAL3
			if (ramal3->getLista()->getItem(i)->getCodigo() == i)
			{
				if (cont_silla_ruedas == 5)
				{
					//que reciba por parametro la persona todo
					ListaParadas->getItem(i)->Llenar_Listas(new cPersona(ListaParadas->getItem(r)->getNombre, true));
					cont_silla_ruedas = 0;
				}
				else
				{
					ListaParadas->getItem(i)->Llenar_Listas(new cPersona(ListaParadas->getItem(r)->getNombre, false));
				}
			}
		}
	}*/


		/*for (int i = 1; i <= N; i++)
		{
			int cantPersonas = rand() % M;

			int cont_silla_ruedas = 0;

			for (int j = 0; j <= cantPersonas; j++)
			{

					// ListaParadas->getItem(i)->getListaPersonas->AgregarItem(new cPersona(ListaParadas[y]->getNombre(), true))

					//Random para generar destino 
					y = rand() % 1 - 9;
					cont_silla_ruedas++;

					if (ramal1->getLista()->getItem(i)->getCodigo == y)
					{
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
		}*/
		
int y = 0;
		//hacer para la lista entera de colectivos
	for (int i = 0; i <= lista_colectivos->getCA(); i++)
	{		
		lista_colectivos->BuscarItem(i)->Cobrar_Boleto();
		(*lista_colectivos)[i]->Cobrar_Boleto();
		(*lista_colectivos)[i]->Bajar_Personas();
		(*lista_colectivos)[i]->Verificar_Capacidad();
		(*lista_colectivos)[i]->SistemaGPS();

		y = rand() % 1 - 3;
		if(y==1)
			(*lista_colectivos)[i]->Asignar_Nuevo_Ramal(ramal1);
		if (y == 2)
			(*lista_colectivos)[i]->Asignar_Nuevo_Ramal(ramal2);
		if (y == 3)
			(*lista_colectivos)[i]->Asignar_Nuevo_Ramal(ramal3);
	}
	system("pause");
}



float cSistema_Rutatlantica::total_cant_monto()
{
	float totalMonto = 0;

	int totalPersonas = 0;

	for (int i = 0; i <= lista_colectivos->getCA(); i++)
	{
		totalMonto = (*lista_colectivos)[i]->Cobrar_Boleto() + totalMonto;
	}

	return totalMonto;
}



int cSistema_Rutatlantica::total_cant_Personas()
{
	int totalPersonas = 0;

	for (int i = 0; i <= lista_colectivos->getCA(); i++)
	{
		totalPersonas = (*lista_colectivos)[i]->getCantidad_de_Personas();
	}

	return totalPersonas;
}

//va a subir o no pasajeros con sillas de ruedas
//ERROR.
void cSistema_Rutatlantica::subir_pasajeros()
{
	/*for (int i = 0; i < 10; i++)
	{
		//Cuando compilo salta un error que v esta inicializada multiples veces.
		cColectivo_viejo*v = dynamic_cast<cColectivo_viejo*>(lista_colectivos->getItem[i]);
		//cColectivo_viejo*v = dynamic_cast<cColectivo_viejo*>((*lista_colectivos)[i]);
		cAcordeon*c = dynamic_cast<cAcordeon*>(lista_colectivos->getItem(i));
		cColectivo_nuevo*n = dynamic_cast<cColectivo_nuevo*>(lista_colectivos->getItem[i]);
		
	
		{	if (c != NULL)
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
	}*/
}


cSistema_Rutatlantica::~cSistema_Rutatlantica()
{
	//delete ListaParadas;

	

	/*for (int j = 0; j < M; j++)
	{
		if (ListaPersona[j] != NULL)
		{
			ListaPersona[j] = NULL;
		}

	}
	delete[]ListaPersona;*/
	
}






