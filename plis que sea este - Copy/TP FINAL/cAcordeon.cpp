
#include "cAcordeon.h"

cAcordeon::cAcordeon()
{

}

cAcordeon::cAcordeon(const string _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion):cColectivo_nuevo(_codigo,_estado,ramal,_aire,_direccion)
{

}


void cAcordeon::Abrir_Puerta()
{
	
}


void cAcordeon::Asignar_Nuevo_Ramal()
{

}


int cAcordeon::Bajar_Personas()
{
	return 0;
}


double cAcordeon::Cobrar_Boleto(string l)
{

	return 0;
}


void cAcordeon::SistemaGPS()
{

}


int cAcordeon::Subir_Personas()
{

	return 0;
}


bool cAcordeon::Verificar_Capacidad()
{

	return false;
}

void cAcordeon::set_CAPMAX(int capacidad)
{	
	CAPMAX = capacidad;

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
