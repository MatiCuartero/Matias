
#include "cAcordeon.h"
<<<<<<< HEAD

=======
>>>>>>> b4a0ed8751876c2e13e49383f8718492009903eb

cAcordeon::cAcordeon()
{
	CA = 0;
	CAPMAX = D;
}

<<<<<<< HEAD
cAcordeon::cAcordeon(const string _codigo, bool _estado, cRamal *ramal, bool _aire, bool _direccion):cColectivo_nuevo(_codigo,_estado,ramal,_aire,_direccion)
=======
<<<<<<< HEAD
cAcordeon::cAcordeon(int _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion) :cColectivo_nuevo(_codigo, _estado, ramal, _aire, _direccion)
{
	
=======
cAcordeon::cAcordeon(const string _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion):cColectivo_nuevo(_codigo,_estado,ramal,_aire,_direccion)
>>>>>>> 93efea4b1196dbf839a42684acbae98ec9dedb11
{
>>>>>>> b4a0ed8751876c2e13e49383f8718492009903eb

}




void cAcordeon::Asignar_Nuevo_Ramal()
{
<<<<<<< HEAD
	//hereda el metodo de la clase padre
=======
	Asignar_Nuevo_Ramal();
>>>>>>> b4a0ed8751876c2e13e49383f8718492009903eb
}


int cAcordeon::Bajar_Personas()
{
<<<<<<< HEAD
	//hereda el metodo de la clase padre	
=======
	Bajar_Personas();
>>>>>>> b4a0ed8751876c2e13e49383f8718492009903eb
}


float cAcordeon::Cobrar_Boleto()
{
<<<<<<< HEAD
	//hereda el metodo de la clase padre
=======
	return Cobrar_Boleto();
>>>>>>> b4a0ed8751876c2e13e49383f8718492009903eb
}


void cAcordeon::SistemaGPS()
{
<<<<<<< HEAD
	//hereda el metodo de la clase padre
=======
	SistemaGPS();
>>>>>>> b4a0ed8751876c2e13e49383f8718492009903eb
}


void cAcordeon::Subir_Personas()
{
	Subir_Personas();
}


bool cAcordeon::Verificar_Capacidad()
{
	//hereda el metodo de la clase padre	
}


int cAcordeon::get_CAPMAX()
{
	//hereda el metodo de la clase padre
}

void cAcordeon::Rotura()
{
	//hereda el metodo de la clase padre
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
