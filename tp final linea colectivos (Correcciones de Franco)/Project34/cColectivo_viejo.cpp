
#include "cColectivo_viejo.h"


cColectivo_viejo::cColectivo_viejo()
{
	ramal = new cRamal();
	CA = 0;
	CAPMAX = L;
}

cColectivo_viejo::cColectivo_viejo(int _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion):cColectivo(_codigo,_estado,ramal)
{
	aire = _aire;
	direccion_hidraulica = _direccion;

}

void cColectivo_viejo::Asignar_Nuevo_Ramal(cRamal * ramal1, cRamal * ramal2, cRamal * ramal3)
{
	//hereda el metodo de la clase padre
}

int cColectivo_viejo::Bajar_Personas()
{
	//hereda el metodo de la clase padre
}

double cColectivo_viejo::Cobrar_Boleto()
{
	//hereda el metodo de la clase padre
}

void cColectivo_viejo::SistemaGPS()
{
	//hereda el metodo de la clase padre
}

void cColectivo_viejo::Subir_Personas()//aca hay que fijarse que las personas tengan o no silla de ruedas 
{
	int ca = 0;

	for (int i = 0; i < 5; i++)//no son 10
	{

		for (int j = 0; j < M; j++)
		{
			if (Parada_Actual->getListaPersonas[j]->getDestino() == ramal->getLista()[i]->getNombre() && Parada_Actual->getListaPersonas[j]->getSilla_ruedas() == true)
			{
				Lista_Personas[ca] = Parada_Actual->getListaPersonas[i]->quitar(Parada_Actual->getListaPersonas->getCodigo());
				ca++;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < M; j++)
		{
			if (Parada_Actual->getListaPersonas[j]->getDestino() == ramal->getLista()[i]->getNombre())
			{
				Lista_Personas[ca] = Parada_Actual->getListaPersonas[i]->quitar(Parada_Actual->getListaPersonas->getCodigo());
				ca++;
			}
		}
	}


}

bool cColectivo_viejo::Verificar_Capacidad()//para verificar necesito las personas que ya estan en el colectivo para comparar con mi capacidad maxima dependiendo del tipo
{
	//hereda el metodo de la clase padre
}


void cColectivo_viejo::imprimir_info()
{
	//HACER OTRA COSA O SACARLO
	cout << "Soy un colectivo viejo de la linea 60 " << endl;
}

void cColectivo_viejo::Rotura()
{
	//hereda el metodo de la clase padre
}

int cColectivo_viejo::get_CAPMAX()
{
	//hereda el metodo de la clase padre
}

cColectivo_viejo::~cColectivo_viejo()
{
	cout << "destruyendo colectivo viejo" << endl;
	ramal = NULL;
}