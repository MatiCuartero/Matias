#include "cColectivo_nuevo.h"



cColectivo_nuevo::cColectivo_nuevo(const string _codigo, bool _estado, cRamal *ramal, bool _aire, bool _direccion) :cColectivo(_codigo, _estado, ramal)
{
	aire = _aire;
	direccion_electrica = _direccion;
}

cColectivo_nuevo::cColectivo_nuevo()
{
	aire = true;
	direccion_electrica = true;
	CantidadPersonas = 0;
}

void cColectivo_nuevo::Asignar_Nuevo_Ramal(cRamal *ramal)
{
	Asignar_Nuevo_Ramal(ramal);
}

void cColectivo_nuevo::Bajar_Personas()
{
	Bajar_Personas();
}

float cColectivo_nuevo::Cobrar_Boleto()
{
	return Cobrar_Boleto();
}

void cColectivo_nuevo::SistemaGPS()
{
	SistemaGPS();
}

void cColectivo_nuevo::Subir_Personas()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < Parada_Actual->getListaPersonas()->getCA(); j++)
		{
			if (Parada_Actual->getListaPersonas()->getItem(j)->getDestino() == ramal->getLista()->getItem(i)->getNombre() && Parada_Actual->getListaPersonas(j)->getItem(i)->getSilla_ruedas() == true)
			{
				ListaPersona->operator+(Parada_Actual->getListaPersonas()->Quitar(Parada_Actual->getListaPersonas()->getItem(j)->getCodigo()));
				//Una vez que quito las personas de la lista de personas de la parada y la asigno a la lista de personas del colectivo, Hace falta eliminarlas de la parada tambien??
				//ListaPersona->operator+(Parada_Actual->getListaPersonas[j]->quitar(Parada_Actual->getListaPersonas->getCodigo()));
				CantidadPersonas++;
			}
		}
	}

	for (int i = 0; i < 9; i++)
	{

		for (int j = 0; j < M; j++)
		{
			if (Parada_Actual->getListaPersonas()->getItem(j)->getDestino() == ramal->getLista()->getItem(j)->getNombre())
			{
				//Lo mismo aca.
				ListaPersona->operator+(Parada_Actual->getListaPersonas()->Quitar(Parada_Actual->getListaPersonas()->getItem(i)->getCodigo()));
				CantidadPersonas++;
			}
		}
	}
}

bool cColectivo_nuevo::Verificar_Capacidad()
{
	return Verificar_Capacidad();
}

void cColectivo_nuevo::imprimir_info()
{
	//HACER OTRA COSA O SACARLO
	cout << "Soy un colectivo nuevo de la linea 60 " << endl;
}

void cColectivo_nuevo::Rotura()
{
	//hereda el metodo de la clase padre
}


ostream & operator<<(ostream &o, cColectivo_nuevo &colec)
{
	/*o << "El codigo del colectivo es:" << colec.codigo << endl;
	o << " El colectivo tiene aire :" << colec.aire << endl;
	o << "El colectivo tiene direccion electrica" << colec.direccion_electrica << endl;
	o << "El colectivo tiene capacidad para" << colec.CAPMAX << "personas " << endl;*/
	return o;
}

string cColectivo_nuevo::get_codigo() const
{
	return codigo;
}

cColectivo_nuevo::~cColectivo_nuevo()
{
	cout << "destruyendo el colectivo nuevo" << endl;
	ramal = NULL;
}
