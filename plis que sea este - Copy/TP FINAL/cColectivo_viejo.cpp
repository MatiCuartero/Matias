
#include "cColectivo_viejo.h"


cColectivo_viejo::cColectivo_viejo()
{
	ramal = new cRamal();
}

cColectivo_viejo::cColectivo_viejo(const string _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion):cColectivo(_codigo,_estado,ramal)
{
	aire = _aire;
	direccion_hidraulica = _direccion;

}


void cColectivo_viejo::Subir_Personas(cColectivo*colectivo[10])
{
	for (int i = 0; i < 10; i++)
	{
		cAcordeon*a = dynamic_cast <cAcordeon*>(colectivo[i]);
		if (a != NULL)
		{
			a->lista_personas->AgregarItem(Parada_Actual->lista_personas->QuitarItem(i));
				cout << "Se permiten personas con sillas de ruedas en el colectivo tipo :ACORDEON" << endl;
			cout << "En el colectivo N°:" << i << "Codigo:" << colectivo[i]->get_codigo() << endl;
		}


		cColectivo_nuevo*n = dynamic_cast<cColectivo_nuevo*>(colectivo[i]);
		if (n != NULL)
		{
			n->lista_personas->AgregarItem(Parada_Actual->Lista_personas->QuitarItem(i));
				cout << "Se permiten personas con sillas de ruedas en el colectivo de tipo: COLECTIVO NUEVO " << endl;
			cout << "En el colectivo N°:" << i << "Codigo:" << colectivo[i]->get_codigo() << endl;
		}

		else

			cout << "El COLECTIVO VIEJO no permite personas con silas de ruedas" << endl;
		cout << "En el colectivo N°:" << i << "Codigo:" << colectivo[i]->get_codigo() << endl;

	}
}

bool cColectivo_viejo::Verificar_Capacidad()
{
	if (CA < CAPMAX)

		return true;

	else
		return false;
}

cColectivo_viejo::~cColectivo_viejo()
{
	cout << "destruyendo colectivo viejo" << endl;
}

void cColectivo_viejo::imprimir_info()
{
	cout << "Soy un colectivo viejo" << endl;
	cout << "Si el colectivo tiene aire=1, si no =0" << endl;
	cout << "Aire:" << aire << endl;
	cout << "Direccion hidraulica:" << direccion_hidraulica << endl;

}

void cColectivo_viejo::set_CAPMAX(int capacidad)
{
	capacidad = 20;
	CAPMAX = capacidad;
}

int cColectivo_viejo::get_CAPMAX()
{
	return CAPMAX;
}
