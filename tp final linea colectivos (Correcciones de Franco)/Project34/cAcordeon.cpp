
#include "cAcordeon.h"

cAcordeon::cAcordeon()
{
	CA = 0;
	CAPMAX = D;
}

cAcordeon::cAcordeon(const string _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion):cColectivo_nuevo(_codigo,_estado,ramal,_aire,_direccion)
{

}




void cAcordeon::Asignar_Nuevo_Ramal()
{
	Asignar_Nuevo_Ramal();
}


int cAcordeon::Bajar_Personas()
{
	Bajar_Personas();
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
	if (CA < CAPMAX)

		return true;

	else
		return false;
}


int cAcordeon::get_CAPMAX()
{
	return CAPMAX;
}



cAcordeon::~cAcordeon()
{

}



////////PARA USAR DYNAMIC CAST DEBERIA USAR EL METODO DE SUBIR PERSONAS
//EL COELCTVIO VIAJO NO DEBERIA DEJAR SUBIR A PERSONAS EN SILLA DE RUEDAS
//EMPIEZO CON UN PUNTERO DE UN OBJETO HIJ0(PRIMERO ACORDEON , SEGUNDO COLECTIVO NUEVO ,TERCERO COLECTIVO VIEJO)
//HACER LA LISTA EN PARADAS, AGREGAR
