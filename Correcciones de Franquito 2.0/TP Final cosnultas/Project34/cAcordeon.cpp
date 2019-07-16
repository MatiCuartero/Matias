#include "cAcordeon.h"
#include "cRamal.h"

cAcordeon::cAcordeon()
{
	CA = 0;
	CAPMAX = D;
}

cAcordeon::cAcordeon(const string _codigo, bool _estado, cRamal *ramal, bool _aire, bool _direccion) :cColectivo_nuevo(_codigo, _estado, ramal, _aire, _direccion)
{

}


void cAcordeon::Asignar_Nuevo_Ramal()
{
	Asignar_Nuevo_Ramal();
}


int cAcordeon::Bajar_Personas()
{
	return Bajar_Personas();
}


float cAcordeon::Cobrar_Boleto()
{
	return Cobrar_Boleto();
}


void cAcordeon::SistemaGPS()
{
	SistemaGPS();
}


void cAcordeon::Subir_Personas()
{
	Subir_Personas();
}


bool cAcordeon::Verificar_Capacidad()
{
	return Verificar_Capacidad();
}


int cAcordeon::get_CAPMAX()
{
	return get_CAPMAX();
}

void cAcordeon::Rotura()
{
	Rotura();
}

void cAcordeon::imprimir_info()
{
	//HACER OTRA COSA O SACARLO
	cout << "Soy un colectivo acordeon de la linea 60" << endl;
}

cAcordeon::~cAcordeon()
{
}


//EMPIEZO CON UN PUNTERO DE UN OBJETO HIJ0(PRIMERO ACORDEON , SEGUNDO COLECTIVO NUEVO ,TERCERO COLECTIVO VIEJO)
//HACER LA LISTA EN PARADAS, AGREGAR
