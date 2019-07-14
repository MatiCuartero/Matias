#include "cColectivo_nuevo.h"

cColectivo_nuevo::cColectivo_nuevo()
{
	aire = true;
	direccion_electrica = true;
	CantidadPersonas = 0;
}

cColectivo_nuevo::cColectivo_nuevo(const string _codigo, bool _estado, cRamal *ramal, bool _aire, bool _direccion) :cColectivo(_codigo, _estado, ramal)
{
	aire = _aire;
	direccion_electrica = _direccion;
}


void cColectivo_nuevo::Asignar_Nuevo_Ramal(cRamal *ramal1, cRamal *ramal2, cRamal *ramal3)
{
	//hereda el metodo de la clase padre
}

void cColectivo_nuevo::Bajar_Personas()
{
	//hereda el metodo de la clase padre
}

float cColectivo_nuevo::Cobrar_Boleto()
{
	return Cobrar_Boleto();

	//hereda el metodo de la clase padre
}

void cColectivo_nuevo::SistemaGPS()
{
	SistemaGPS();
}

void cColectivo_nuevo::Subir_Personas()
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

bool cColectivo_nuevo::Verificar_Capacidad()//para verificar necesito las personas que ya estan en el colectivo para comparar con mi capacidad maxima dependiendo del tipo
{
	//hereda el metodo de la clase padre
}

void cColectivo_nuevo::imprimir_info()
{
	cout << "Soy un colectivo nuevo" << endl;
	cout << "Si el colectivo tiene aire = 1, si no = 0" << endl;
	cout << "Aire:" << aire << endl;
	cout << "Direccion electrica:" << direccion_electrica << endl;

}

void cColectivo_nuevo::Rotura()
{
	//hereda el metodo de la clase padre
}


ostream & operator<<(ostream &o, cColectivo_nuevo &colec)
{
	o << "El codigo del colectivo es:" << colec.codigo << endl;
	o << " El colectivo tiene aire :" << colec.aire << endl;
	o << "El colectivo tiene direccion electrica" << colec.direccion_electrica << endl;
	o << "El colectivo tiene capacidad para" << colec.CAPMAX << "personas " << endl;
	return o;
}

 cColectivo_nuevo::~cColectivo_nuevo()
{
	cout << "destruyendo el colectivo nuevo" << endl;
	ramal = NULL;
}
