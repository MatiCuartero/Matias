
#include "cColectivo_viejo.h"


cColectivo_viejo::cColectivo_viejo()
{
	ramal = new cRamal();
	CA = 0;
	CAPMAX = L;
}

cColectivo_viejo::cColectivo_viejo(const string _codigo, bool _estado, cRamal *ramal, bool _aire, bool _direccion):cColectivo(_codigo,_estado,ramal)
{
	aire = _aire;
	direccion_hidraulica = _direccion;
}

void cColectivo_viejo::Asignar_Nuevo_Ramal()
{
<<<<<<< HEAD
	//hereda el metodo de la clase padre
=======
	Asignar_Nuevo_Ramal();
>>>>>>> 23b67fe552bdbaea02b22b34bffd0c661c5c88d4
}

int cColectivo_viejo::Bajar_Personas()
{
	return Bajar_Personas();
}

<<<<<<< HEAD
float cColectivo_viejo::Cobrar_Boleto()
{
	//hereda el metodo de la clase padre
}

void cColectivo_viejo::SistemaGPS()
{
	//hereda el metodo de la clase padre

	/*if (ramal->getNombre() == ramal1->getNombre() && Parada_Actual->getCodigo() == ramal1->getLista[4]->getCodigo())
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
	}*/
}
=======
>>>>>>> 23b67fe552bdbaea02b22b34bffd0c661c5c88d4


float cColectivo_viejo::Cobrar_Boleto()
{
	//hereda el metodo de la clase padre
	return Cobrar_Boleto();
}

void cColectivo_viejo::SistemaGPS()
{
	//hereda el metodo de la clase padre
	SistemaGPS();
<<<<<<< HEAD

=======
>>>>>>> 23b67fe552bdbaea02b22b34bffd0c661c5c88d4
}

void cColectivo_viejo::Subir_Personas()
{
<<<<<<< HEAD


	for (int i = 0; i < 5; i++)//no son 10

	for (int i = 0; i < 5; i++)

	{
		for (int j = 0; j < M; j++)
		{

			if (Parada_Actual->getListaPersonas[j]->getDestino() == ramal->getLista()[i]->getNombre() && Parada_Actual->getListaPersonas[j]->getSilla_ruedas() == true)

			if (Parada_Actual->getListaPersonas()->getItem(j)->getDestino() == ramal->getLista[i]->getNombre() && Parada_Actual->getListaPersonas[j]->getSilla_ruedas() == true)

			{
				ListaPersona + (Parada_Actual->getListaPersonas--(j));
			}
		}
	}


=======
>>>>>>> 23b67fe552bdbaea02b22b34bffd0c661c5c88d4
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (Parada_Actual->getListaPersonas()->getItem(j)->getDestino() == *ramal->getLista[i]->getNombre() && *Parada_Actual->getListaPersonas[j]->getSilla_ruedas() == true)
			{
				ListaPersona->operator+(Parada_Actual->getListaPersonas()->Quitar(j));
			}
		}
	}
<<<<<<< HEAD


=======
>>>>>>> 23b67fe552bdbaea02b22b34bffd0c661c5c88d4
}

bool cColectivo_viejo::Verificar_Capacidad()//para verificar necesito las personas que ya estan en el colectivo para comparar con mi capacidad maxima dependiendo del tipo
{
<<<<<<< HEAD
	//hereda el metodo de la clase padre
}


void cColectivo_viejo::Rotura()
{
	//hereda el metodo de la clase padre
}

int cColectivo_viejo::get_CAPMAX()
{
	//hereda el metodo de la clase padre
}

	/*for(int i =0;i<   ,i++)

	if (CA < CAPMAX)
=======
	return Verificar_Capacidad();
}
>>>>>>> 23b67fe552bdbaea02b22b34bffd0c661c5c88d4


<<<<<<< HEAD
	else
		return false;*/
=======
>>>>>>> 23b67fe552bdbaea02b22b34bffd0c661c5c88d4

void cColectivo_viejo::imprimir_info()
{
	cout << "Soy un colectivo viejo" << endl;
	cout << "Si el colectivo tiene aire=1, si no =0" << endl;
	cout << "Aire:" << aire << endl;
	cout << "Direccion hidraulica:" << direccion_hidraulica << endl;
<<<<<<< HEAD

}


=======
}


void cColectivo_viejo::Rotura()
{
	Rotura();
}


int cColectivo_viejo::get_CAPMAX()
{
	return get_CAPMAX();
}

>>>>>>> 23b67fe552bdbaea02b22b34bffd0c661c5c88d4
cColectivo_viejo::~cColectivo_viejo()
{
	cout << "destruyendo colectivo viejo" << endl;
	ramal = NULL;
}